/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf --key-positions='*' -D -s 2 --output-file=./ColorData.cpp '/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf'  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"

#include "HashTools.h"
#include <string.h>

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wdeprecated-register"
#endif

namespace WebCore {
enum
  {
    TOTAL_KEYWORDS = 150,
    MIN_WORD_LENGTH = 3,
    MAX_WORD_LENGTH = 20,
    MIN_HASH_VALUE = 3,
    MAX_HASH_VALUE = 1055
  };

/* maximum key range = 1053, duplicates = 0 */

class ColorDataHash
{
private:
  static inline unsigned int colordata_hash_function (const char *str, unsigned int len);
public:
  static const struct NamedColor *findColorImpl (const char *str, unsigned int len);
};

inline unsigned int
ColorDataHash::colordata_hash_function (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056,    5,    0,  105,
         0,    0,   30,   40,   40,   10,    0,    0,   15,   60,
         0,    5,  255,   40,    0,   10,   15,  130,  300,  215,
         5,    0,    0, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056, 1056,
      1056, 1056, 1056, 1056, 1056, 1056, 1056
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[19]];
      /*FALLTHROUGH*/
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[(unsigned char)str[10]+1];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct NamedColor wordlist[] =
  {
#line 145 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"red", 0xffff0000},
#line 57 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkred", 0xff8b0000},
#line 162 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"tan", 0xffd2b48c},
#line 110 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"linen", 0xfffaf0e6},
#line 153 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"sienna", 0xffa0522d},
#line 84 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"indianred", 0xffcd5c5c},
#line 163 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"teal", 0xff008080},
#line 79 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"grey", 0xff808080},
#line 80 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"green", 0xff008000},
#line 78 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"gray", 0xff808080},
#line 50 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkgrey", 0xffa9a9a9},
#line 51 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkgreen", 0xff006400},
#line 30 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"beige", 0xfff5f5dc},
#line 131 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"orange", 0xffffa500},
#line 49 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkgray", 0xffa9a9a9},
#line 132 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"orangered", 0xffff4500},
#line 87 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"khaki", 0xfff0e68c},
#line 151 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"seagreen", 0xff2e8b57},
#line 76 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"gold", 0xffffd700},
#line 55 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkorange", 0xffff8c00},
#line 52 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkkhaki", 0xffbdb76b},
#line 85 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"indigo", 0xff4b0082},
#line 77 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"goldenrod", 0xffdaa520},
#line 112 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"maroon", 0xff800000},
#line 74 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"gainsboro", 0xffdcdcdc},
#line 108 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lime", 0xff00ff00},
#line 81 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"greenyellow", 0xffadff2f},
#line 48 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkgoldenrod", 0xffb8860b},
#line 158 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"slategrey", 0xff708090},
#line 157 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"slategray", 0xff708090},
#line 149 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"salmon", 0xfffa8072},
#line 59 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkseagreen", 0xff8fbc8f},
#line 152 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"seashell", 0xfffff5ee},
#line 58 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darksalmon", 0xffe9967a},
#line 165 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"tomato", 0xffff6347},
#line 164 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"thistle", 0xffd8bfd8},
#line 62 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkslategrey", 0xff2f4f4f},
#line 45 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"cyan", 0xff00ffff},
#line 72 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"forestgreen", 0xff228b22},
#line 68 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"dimgrey", 0xff696969},
#line 61 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkslategray", 0xff2f4f4f},
#line 124 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mistyrose", 0xffffe4e1},
#line 67 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"dimgray", 0xff696969},
#line 47 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkcyan", 0xff008b8b},
#line 32 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"black", 0xff000000},
#line 111 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"magenta", 0xffff00ff},
#line 109 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"limegreen", 0xff32cd32},
#line 41 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"coral", 0xffff7f50},
#line 53 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkmagenta", 0xff8b008b},
#line 29 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"azure", 0xfff0ffff},
#line 34 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"blue", 0xff0000ff},
#line 128 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"oldlace", 0xfffdf5e6},
#line 43 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"cornsilk", 0xfffff8dc},
#line 46 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkblue", 0xff00008b},
#line 155 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"skyblue", 0xff87ceeb},
#line 70 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"firebrick", 0xffb22222},
#line 133 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"orchid", 0xffda70d6},
#line 97 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightgrey", 0xffd3d3d3},
#line 98 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightgreen", 0xff90ee90},
#line 107 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightyellow", 0xffffffe0},
#line 96 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightgray", 0xffd3d3d3},
#line 56 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkorchid", 0xff9932cc},
#line 147 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"royalblue", 0xff4169e1},
#line 27 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"aqua", 0xff00ffff},
#line 161 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"steelblue", 0xff4682b4},
#line 31 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"bisque", 0xffffe4c4},
#line 44 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"crimson", 0xffdc143c},
#line 156 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"slateblue", 0xff6a5acd},
#line 69 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"dodgerblue", 0xff1e90ff},
#line 33 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"blanchedalmond", 0xffffebcd},
#line 101 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightseagreen", 0xff20b2aa},
#line 105 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightslategrey", 0xff778899},
#line 104 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightslategray", 0xff778899},
#line 36 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"brown", 0xffa52a2a},
#line 100 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightsalmon", 0xffffa07a},
#line 159 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"snow", 0xfffffafa},
#line 94 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightcyan", 0xffe0ffff},
#line 146 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"rosybrown", 0xffbc8f8f},
#line 150 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"sandybrown", 0xfff4a460},
#line 60 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkslateblue", 0xff483d8b},
#line 173 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"yellow", 0xffffff00},
#line 93 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightcoral", 0xfff08080},
#line 123 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mintcream", 0xfff5fffa},
#line 28 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"aquamarine", 0xff7fffd4},
#line 148 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"saddlebrown", 0xff8b4513},
#line 82 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"honeydew", 0xfff0fff0},
#line 141 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"pink", 0xffffc0cb},
#line 92 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightblue", 0xffadd8e6},
#line 38 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"cadetblue", 0xff5f9ea0},
#line 170 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"wheat", 0xfff5deb3},
#line 90 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lawngreen", 0xff7cfc00},
#line 171 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"white", 0xffffffff},
#line 25 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"aliceblue", 0xfff0f8ff},
#line 40 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"chocolate", 0xffd2691e},
#line 174 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"yellowgreen", 0xff9acd32},
#line 125 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"moccasin", 0xffffe4b5},
#line 127 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"navy", 0xff000080},
#line 39 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"chartreuse", 0xff7fff00},
#line 86 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"ivory", 0xfffffff0},
#line 135 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"palegreen", 0xff98fb98},
#line 88 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lavender", 0xffe6e6fa},
#line 83 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"hotpink", 0xffff69b4},
#line 129 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"olive", 0xff808000},
#line 73 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"fuchsia", 0xffff00ff},
#line 117 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumseagreen", 0xff3cb371},
#line 154 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"silver", 0xffc0c0c0},
#line 130 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"olivedrab", 0xff6b8e23},
#line 63 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkturquoise", 0xff00ced1},
#line 167 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"turquoise", 0xff40e0d0},
#line 168 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"violet", 0xffee82ee},
#line 169 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"violetred", 0xffd02090},
#line 64 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkviolet", 0xff9400d3},
#line 134 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"palegoldenrod", 0xffeee8aa},
#line 172 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"whitesmoke", 0xfff5f5f5},
#line 160 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"springgreen", 0xff00ff7f},
#line 37 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"burlywood", 0xffdeb887},
#line 140 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"peru", 0xffcd853f},
#line 71 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"floralwhite", 0xfffffaf0},
#line 99 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightpink", 0xffffb6c1},
#line 54 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"darkolivegreen", 0xff556b2f},
#line 75 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"ghostwhite", 0xfff8f8ff},
#line 114 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumblue", 0xff0000cd},
#line 115 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumorchid", 0xffba55d3},
#line 106 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightsteelblue", 0xffb0c4de},
#line 103 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightslateblue", 0xff8470ff},
#line 166 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"transparent", 0x00000000},
#line 66 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"deepskyblue", 0xff00bfff},
#line 102 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightskyblue", 0xff87cefa},
#line 95 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lightgoldenrodyellow", 0xfffafad2},
#line 142 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"plum", 0xffdda0dd},
#line 113 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumaquamarine", 0xff66cdaa},
#line 118 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumslateblue", 0xff7b68ee},
#line 35 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"blueviolet", 0xff8a2be2},
#line 122 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"midnightblue", 0xff191970},
#line 65 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"deeppink", 0xffff1493},
#line 91 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lemonchiffon", 0xfffffacd},
#line 26 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"antiquewhite", 0xfffaebd7},
#line 136 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"paleturquoise", 0xffafeeee},
#line 143 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"powderblue", 0xffb0e0e6},
#line 126 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"navajowhite", 0xffffdead},
#line 119 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumspringgreen", 0xff00fa9a},
#line 42 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"cornflowerblue", 0xff6495ed},
#line 137 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"palevioletred", 0xffdb7093},
#line 121 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumvioletred", 0xffc71585},
#line 144 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"purple", 0xff800080},
#line 89 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"lavenderblush", 0xfffff0f5},
#line 120 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumturquoise", 0xff48d1cc},
#line 139 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"peachpuff", 0xffffdab9},
#line 116 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"mediumpurple", 0xff9370db},
#line 138 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"
    {"papayawhip", 0xffffefd5}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,   0,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,   2,  -1,  -1,  -1,  -1,  -1,  -1,
      3,   4,  -1,  -1,   5,  -1,  -1,  -1,  -1,   6,
     -1,  -1,  -1,  -1,   7,   8,  -1,  -1,  -1,   9,
     -1,  -1,  -1,  10,  11,  12,  13,  -1,  14,  15,
     16,  -1,  -1,  17,  18,  19,  -1,  -1,  -1,  20,
     -1,  21,  -1,  -1,  22,  -1,  -1,  -1,  -1,  -1,
     -1,  23,  -1,  -1,  24,  -1,  -1,  -1,  -1,  25,
     -1,  26,  -1,  27,  28,  -1,  -1,  -1,  -1,  29,
     -1,  30,  31,  32,  -1,  -1,  -1,  -1,  -1,  -1,
     33,  34,  35,  36,  37,  -1,  38,  39,  40,  41,
     -1,  -1,  42,  43,  -1,  -1,  -1,  -1,  -1,  -1,
     44,  -1,  45,  -1,  46,  47,  48,  -1,  -1,  -1,
     49,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  50,
     -1,  -1,  51,  52,  -1,  -1,  -1,  -1,  53,  -1,
     -1,  -1,  54,  -1,  55,  -1,  56,  -1,  -1,  57,
     58,  59,  -1,  -1,  60,  61,  -1,  -1,  -1,  62,
     -1,  -1,  -1,  -1,  63,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  64,  -1,  65,  66,  -1,  67,
     68,  -1,  -1,  -1,  69,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  70,  71,
     -1,  -1,  -1,  -1,  72,  73,  -1,  -1,  -1,  -1,
     -1,  74,  -1,  -1,  75,  -1,  -1,  -1,  -1,  76,
     -1,  -1,  -1,  -1,  77,  78,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  79,  -1,  -1,  80,  -1,  -1,  -1,
     81,  -1,  -1,  -1,  82,  83,  84,  -1,  85,  86,
     -1,  -1,  -1,  -1,  87,  -1,  -1,  -1,  -1,  88,
     89,  -1,  -1,  -1,  90,  91,  -1,  -1,  -1,  92,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  93,  -1,  94,  -1,  95,  96,
     -1,  -1,  -1,  -1,  -1,  97,  -1,  -1,  -1,  -1,
     98,  -1,  -1,  -1,  99,  -1,  -1,  -1, 100,  -1,
     -1,  -1, 101,  -1,  -1, 102,  -1, 103,  -1, 104,
     -1, 105,  -1,  -1, 106,  -1,  -1,  -1, 107, 108,
     -1, 109,  -1,  -1, 110,  -1,  -1,  -1,  -1,  -1,
    111,  -1,  -1, 112,  -1, 113,  -1,  -1,  -1,  -1,
     -1, 114,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 115,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 116,
     -1, 117,  -1,  -1, 118,  -1,  -1,  -1,  -1, 119,
    120,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 121,  -1,  -1,  -1,  -1,
     -1,  -1, 122,  -1, 123,  -1,  -1,  -1,  -1, 124,
     -1, 125,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 126,  -1,  -1,  -1,  -1,  -1, 127,  -1,  -1,
    128,  -1,  -1,  -1, 129,  -1,  -1,  -1,  -1,  -1,
     -1, 130,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 131,  -1,  -1,  -1,  -1,
    132,  -1, 133,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 134,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 135,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 136,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 137,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    138,  -1,  -1,  -1,  -1,  -1, 139, 140,  -1, 141,
     -1,  -1,  -1, 142,  -1,  -1,  -1,  -1,  -1,  -1,
    143,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 144,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 145,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 146,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 147,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 148,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 149
  };

const struct NamedColor *
ColorDataHash::findColorImpl (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = colordata_hash_function (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist[index];
            }
        }
    }
  return 0;
}
#line 175 "/home/abaldeva/WEBKIT~1/Source/WebCore/platform/ColorData.gperf"

const struct NamedColor* findColor(const char* str, unsigned int len)
{
    return ColorDataHash::findColorImpl(str, len);
}

} // namespace WebCore

#if defined(__clang__)
#pragma clang diagnostic pop
#endif
