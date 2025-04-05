#include <iostream>
#include <cstdint>
int main()
{
    constexpr std::uint32_t RedBitsMask{0xFF000000};
    constexpr std::uint32_t GreenBitsMask{0x00FF0000};
    constexpr std::uint32_t BlueBitsMask{0x0000FF00};
    constexpr std::uint32_t AlphaBitsMask{0x000000FF};

    std::cout<<"enter 32bits RGBA value in hex : ";
    std::uint32_t EnteredPixel{};
    std::cin>>std::hex>>EnteredPixel;

    std::uint8_t RedPixel{static_cast<std::uint8_t>((EnteredPixel & RedBitsMask)>>24)};
    std::uint8_t GreenPixel{static_cast<std::uint8_t>((EnteredPixel & GreenBitsMask)>>16)};
    std::uint8_t BluePixel{static_cast<std::uint8_t>((EnteredPixel & BlueBitsMask)>>8)};
    std::uint8_t AlphaPixel{static_cast<std::uint8_t>((EnteredPixel & AlphaBitsMask))};

    std::cout<<std::hex;
    std::cout<<"\nred pixel is : "<<static_cast<int>(RedPixel);
    std::cout<<"\ngreen pixel is : "<<static_cast<int>(GreenPixel);
    std::cout<<"\nblue pixel is : "<<static_cast<int>(BluePixel);
    std::cout<<"\nalpha pixel is : "<<static_cast<int>(AlphaPixel)<<"\n\n";

    return 0; 
}