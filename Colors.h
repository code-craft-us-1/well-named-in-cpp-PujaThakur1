#include <string>

namespace TelCoColorCoder {
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;
}