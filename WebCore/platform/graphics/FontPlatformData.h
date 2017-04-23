/*
 * Copyright (C) 2006, 2007, 2008, 2010, 2013 Apple Inc.
 * Copyright (C) 2006 Michael Emmel mike.emmel@gmail.com
 * Copyright (C) 2007 Holger Hans Peter Freyther
 * Copyright (C) 2007 Pioneer Research Center USA, Inc.
 * Copyright (C) 2010, 2011 Brent Fulgham <bfulgham@webkit.org>
 * Copyright (C) 2014 Electronic Arts, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

// FIXME: This is temporary until all ports switch to using this file.
#if PLATFORM(BLACKBERRY)
#include "harfbuzz/FontPlatformDataHarfBuzz.h"
#elif USE(WINGDI)
#include "wince/FontPlatformData.h"
#elif PLATFORM(EFL) || PLATFORM(GTK) || PLATFORM(NIX)
#include "freetype/FontPlatformData.h"
#else

#ifndef FontPlatformData_h
#define FontPlatformData_h

#include "FontOrientation.h"
#include "FontWidthVariant.h"

#if PLATFORM(WIN)
#include "SharedGDIObject.h"
#endif

//+EAWebKitChange
//1/21/2014
#if USE(CAIRO) && !PLATFORM(EA)
#include <wtf/HashFunctions.h>
#include <cairo.h>
#endif
//-EAWebKitChange

#if OS(DARWIN)
OBJC_CLASS NSFont;

typedef struct CGFont* CGFontRef;
typedef const struct __CTFont* CTFontRef;
#endif

#include <wtf/Forward.h>
#include <wtf/PassRefPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RetainPtr.h>
#include <wtf/text/StringImpl.h>

#if PLATFORM(WIN)
#include <wtf/win/GDIObject.h>
typedef struct HFONT__* HFONT;
#endif

#if USE(CG)
typedef struct CGFont* CGFontRef;
#if OS(DARWIN)
typedef const struct __CTFont* CTFontRef;
typedef UInt32 FMFont;
typedef FMFont ATSUFontID;
typedef UInt32 ATSFontRef;
#endif
#endif

//+EAWebKitChange
//1/15/2014
#if PLATFORM(EA)
#include "FontDescription.h"
#include <internal/include/EAWebKitAssert.h>
#include <EAWebkit/EAWebKitTextInterface.h>
#include <wtf/HashFunctions.h>

namespace WebCore
{
// Note by Arpit Baldeva
// We manage our private data as a ref counted structure. From the looks of the code, it does not seem like we really need to keep it ref counted. The underlying font pointer already has a 
// ref count mechanism and we could just use that. However, avoiding too much entropy at the moment but we need to revisit this (EAWebKitTODO).
class FontPlatformDataPrivate {
	friend class FontPlatformData;
	WTF_MAKE_NONCOPYABLE(FontPlatformDataPrivate);
public:
	FontPlatformDataPrivate()
		: refCount(1)
		, mpFont(0)
		, size(0.0f)    
	{
	}
	
	FontPlatformDataPrivate(float size)
		: refCount(1)
		, mpFont(0)
		, size(size)
	{
	}
	~FontPlatformDataPrivate()
	{
		EAW_ASSERT_MSG(refCount==0, "Deleting non-zero ref count");
		if(mpFont)
		{
			mpFont->Release();
			mpFont = NULL;
		}
	}
	unsigned refCount;
	EA::WebKit::IFont* mpFont;
	float size;
};
float ConvertFontSizeToPoints(float fontSizeInPixels);
float ConvertFontWeight(FontWeight weight);
bool ShouldSmoothText(float fontSize, FontSmoothingMode mode = AutoSmoothing);

}
#endif
//-EAWebKitChange

namespace WebCore {

class FontDescription;
class SharedBuffer;

#if OS(DARWIN)
inline CTFontRef toCTFontRef(NSFont *nsFont) { return reinterpret_cast<CTFontRef>(nsFont); }
#endif

class FontPlatformData {
public:
    FontPlatformData(WTF::HashTableDeletedValueType);
    FontPlatformData();
    FontPlatformData(const FontPlatformData&);
    FontPlatformData(const FontDescription&, const AtomicString& family);
    FontPlatformData(float size, bool syntheticBold, bool syntheticOblique, FontOrientation = Horizontal, FontWidthVariant = RegularWidth);

#if OS(DARWIN)
    FontPlatformData(NSFont*, float size, bool isPrinterFont = false, bool syntheticBold = false, bool syntheticOblique = false,
                     FontOrientation = Horizontal, FontWidthVariant = RegularWidth);
#if USE(CG)
    FontPlatformData(CGFontRef, float size, bool syntheticBold, bool syntheticOblique, FontOrientation, FontWidthVariant);
#endif
#endif
#if PLATFORM(WIN)
    FontPlatformData(GDIObject<HFONT>, float size, bool syntheticBold, bool syntheticOblique, bool useGDI);
#if USE(CG)
    FontPlatformData(GDIObject<HFONT>, CGFontRef, float size, bool syntheticBold, bool syntheticOblique, bool useGDI);
#elif USE(CAIRO)
    FontPlatformData(GDIObject<HFONT>, cairo_font_face_t*, float size, bool bold, bool italic);
#endif
#endif
//+EAWebKitChange
//1/15/2014
#if PLATFORM(EA)
	FontPlatformData(FontPlatformDataPrivate*, int size, bool bold, bool italic);
#endif
//-EAWebKitChange

    ~FontPlatformData();

	//+EAWebKitChange
	//1/15/2014
#if PLATFORM(EA)
	EA::WebKit::IFont* font() const; 
//-EAWebKitChange
#elif PLATFORM(WIN)
    HFONT hfont() const { return m_font ? m_font->get() : 0; }
    bool useGDI() const { return m_useGDI; }
#elif OS(DARWIN)
    NSFont* font() const { return m_font; }
    void setFont(NSFont*);
#endif

#if USE(CG)
#if OS(DARWIN)
    CGFontRef cgFont() const { return m_cgFont.get(); }
    CTFontRef ctFont() const;

    bool roundsGlyphAdvances() const;
    bool allowsLigatures() const;
#else
    CGFontRef cgFont() const { return m_cgFont.get(); }
#endif
#endif

    bool isFixedPitch() const;
    float size() const { return m_size; }
    void setSize(float size) { m_size = size; }
    bool syntheticBold() const { return m_syntheticBold; }
    bool syntheticOblique() const { return m_syntheticOblique; }
    bool isColorBitmapFont() const { return m_isColorBitmapFont; }
    bool isCompositeFontReference() const { return m_isCompositeFontReference; }
	//+EAWebKitChange
	//1/21/2014
#if OS(DARWIN) && !PLATFORM(EA)
	bool isPrinterFont() const { return m_isPrinterFont; }
#endif
	//-EAWebKitChange
    FontOrientation orientation() const { return m_orientation; }
    FontWidthVariant widthVariant() const { return m_widthVariant; }

    void setOrientation(FontOrientation orientation) { m_orientation = orientation; }

	//+EAWebKitChange
	//1/21/2014
#if USE(CAIRO) && !PLATFORM(EA)
	cairo_scaled_font_t* scaledFont() const { return m_scaledFont; }
#endif
	//-EAWebKitChange

	unsigned hash() const
    {
		//+EAWebKitChange
		//1/22/2014
#if PLATFORM(EA)
		return PtrHash<EA::WebKit::IFont*>::hash(m_privData->mpFont);
		//-EAWebKitChange
#elif PLATFORM(WIN) && !USE(CAIRO)
        return m_font ? m_font->hash() : 0;
#elif OS(DARWIN)
#if USE(CG)
        ASSERT(m_font || !m_cgFont);
#endif
        uintptr_t hashCodes[3] = { (uintptr_t)m_font, m_widthVariant, static_cast<uintptr_t>(m_isPrinterFont << 3 | m_orientation << 2 | m_syntheticBold << 1 | m_syntheticOblique) };
        return StringHasher::hashMemory<sizeof(hashCodes)>(hashCodes);
#elif USE(CAIRO)
        return PtrHash<cairo_scaled_font_t*>::hash(m_scaledFont);
#endif
    }

    const FontPlatformData& operator=(const FontPlatformData&);

    bool operator==(const FontPlatformData& other) const
    {
        return platformIsEqual(other)
            && m_size == other.m_size
            && m_syntheticBold == other.m_syntheticBold
            && m_syntheticOblique == other.m_syntheticOblique
            && m_isColorBitmapFont == other.m_isColorBitmapFont
            && m_isCompositeFontReference == other.m_isCompositeFontReference
			//+EAWebKitChange
			//1/22/2014
#if OS(DARWIN) && !PLATFORM(EA)
			&& m_isPrinterFont == other.m_isPrinterFont
#endif
			//-EAWebKitChange
            && m_orientation == other.m_orientation
            && m_widthVariant == other.m_widthVariant;
    }

    bool isHashTableDeletedValue() const
    {
		//+EAWebKitChange
		//1/21/2014
#if PLATFORM(EA)
		return m_privData == hashTableDeletedFontValue();
		//-EAWebKitChange
#elif PLATFORM(WIN) && !USE(CAIRO)
        return m_font.isHashTableDeletedValue();
#elif OS(DARWIN)
        return m_font == hashTableDeletedFontValue();
#elif USE(CAIRO)
        return m_scaledFont == hashTableDeletedFontValue();
#endif
    }

#if PLATFORM(WIN) && (USE(CG) || USE(CAIRO))
    PassRefPtr<SharedBuffer> openTypeTable(uint32_t table) const;
#endif

#ifndef NDEBUG
    String description() const;
#endif

private:
    bool platformIsEqual(const FontPlatformData&) const;
    void platformDataInit(const FontPlatformData&);
    const FontPlatformData& platformDataAssign(const FontPlatformData&);
	//+EAWebKitChange
	//1/21/2014
#if OS(DARWIN) && !PLATFORM(EA)
	//-EAWebKitChange
    // Load various data about the font specified by |nsFont| with the size fontSize into the following output paramters:
    void loadFont(NSFont*, float fontSize, NSFont*& outNSFont, CGFontRef&);
    static NSFont* hashTableDeletedFontValue() { return reinterpret_cast<NSFont *>(-1); }
#elif PLATFORM(WIN)
    void platformDataInit(HFONT, float size, HDC, WCHAR* faceName);
#endif

	//+EAWebKitChange
	//1/21/2014
#if PLATFORM(EA)
	static FontPlatformDataPrivate* hashTableDeletedFontValue() { return reinterpret_cast<FontPlatformDataPrivate*>(-1); }
#elif USE(CAIRO)
	static cairo_scaled_font_t* hashTableDeletedFontValue() { return reinterpret_cast<cairo_scaled_font_t*>(-1); }
#endif
	//-EAWebKitChange

public:
    bool m_syntheticBold;
    bool m_syntheticOblique;
    FontOrientation m_orientation;
    float m_size;
    FontWidthVariant m_widthVariant;

private:
	//+EAWebKitChange
	//1/15/2014
#if PLATFORM(EA)
	FontPlatformDataPrivate* m_privData;
	//-EAWebKitChange
#elif OS(DARWIN)
    NSFont* m_font;
#elif PLATFORM(WIN)
    RefPtr<SharedGDIObject<HFONT>> m_font;
#endif

#if USE(CG)
#if PLATFORM(WIN)
    RetainPtr<CGFontRef> m_cgFont;
#else
    RetainPtr<CGFontRef> m_cgFont;
    mutable RetainPtr<CTFontRef> m_CTFont;
#endif
#endif

	//+EAWebKitChange
	//1/21/2014
#if USE(CAIRO) && !PLATFORM(EA)
	cairo_scaled_font_t* m_scaledFont;
#endif
	//-EAWebKitChange



    bool m_isColorBitmapFont;
    bool m_isCompositeFontReference;
	//+EAWebKitChange
	//1/21/2014
#if OS(DARWIN) && !PLATFORM(EA)
	bool m_isPrinterFont;
#endif
	//-EAWebKitChange

#if PLATFORM(WIN)
    bool m_useGDI;
#endif
};

} // namespace WebCore

#endif // FontPlatformData_h

#endif
