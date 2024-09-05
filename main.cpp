#include <iostream>
#include <assert.h>
#include "ColorPair.h"
namespace TelCoColorCoder
{

/*class Formatter
{

public:
static std::string printColorCodingManual(){
        std::string message = "Color Coding Manual\n";
        for(int pairNumber = 1; pairNumber <= 25; pairNumber++) {
            ColorPair colorPair = GetColorFromPairNumber(pairNumber);
            message += std::to_string(pairNumber);
            message += " ";
            message += colorPair.ToString();
            message += "\n";
        }
        return message;
    }
}*/
    
    void testNumberToPair(int pairNumber,
        TelCoColorCoder::MajorColor expectedMajor,
        TelCoColorCoder::MinorColor expectedMinor)
    {
        TelCoColorCoder::ColorPair colorPair =
            TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }
 
    void testPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber)
    {
        int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
}
 
    int main() {
        //testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
        //testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
 
        //testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
        //testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

        std::cout<< TelCoColorCoder::printColorCodingManual();
        return 0;
    }
