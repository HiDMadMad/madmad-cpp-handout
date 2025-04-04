#include <iostream>
#include <bitset>
#include <cstdint>


/// Memory Management :
/*
----------------------------------------------------------------------------------------------------------------
    Do Doi (Binary) : 0, 1                                                             --> 0bNum -->11--> with bitset library
    Hasht Hashti (Octal) : 0, 1, 2, 3, 4, 5, 6, 7                                      --> 0Num  -->11--> std::cout<<sdt::oct<<013
    Dah Dahi (Decimal) : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9                                  --> Num   -->11--> std::cout<<sdt::dec<<11  or normal cout
    Shanzdah Shanzdahi (HexaDecimal) : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F  --> 0xNum -->11--> std::cout<<sdt::hex<<0xB

    n : 0   1   2   3   4    5    6
        |   |   |   |   |    |    |    
        1   2   4   8   16   32   64   ...
    EX: 0   1   0   0   1    0    0  -------> 1*0 + 2*1 + 4*0 + 8*0 + 16*1 + 0*32 + 0*64 --> Dah Dahi = 18

    so --> nBit = 2^n num

    0.1 --> 0.0001100110011...∞
----------------------------------------------------------------------------------------------------------------
    BitSet :
        // include the library :
            #include <bitset>
        // initialize bit variable :
            // std::bitset <BitsNum> VariableName;
            std::bitset<8> OctBit{};
        // usages :
            // now OctBit has 00000000(eight) bits each called a flag --> flag[0] to flag[7] from right to left
            // if OctBit = 00001010  -->  flag[0] is 0 and flag[1] is 1
            // test(2)  --> flag[2] is 0 OR 1 --> return 0 OR 1
            // set(2)   --> switch flag[2] to 1
            // reset(2) --> switch flag[2] to 0
            // flip(2)  --> swtich flag[2] from 0 to 1 OR 1 to 0
            std::OctBit.set(2);


    Bitwise Operators :
        // << : left shift
        // >> : right shift
        // ~  : bitwise not
        // &  : bitwise and
        // |  : bitwise or
        // ^  : bitwise xor
        
        // usages are for BitSets, Integrals( integer types(bool, char, int, ..) (unsigned) )

        // it creates a new value and return that
        std::bitset<4>biti{0b1100};
        // biti<<=1   -->  biti == 1000
        // biti       -->  1100
        // biti >> 1  -->  0110
        // biti << 1  -->  1000
        std::cout<< (biti << 2);  // << and >> are over loaded
        std::cout<< biti << 2;    // its print biti and 2
        // ~biti  -->  0011   // like flip in bitsets
        std::cout<< std::bitset<4>{1010};  // print 1010
        std::cout<< ~std::bitset<4>{1010};  // print 0101
        // |
        std::cout<< (std::bitset<4>{1010} | std::bitset<4>{1001});  // if one of bits are 1 will returns 1 --> 1011
        std::cout<< (std::bitset<4>{1010} | std::bitset<4>{1001} | std::bitset<4>{0101});  // if one of bits are 1 will returns 1 --> 1111
        // &
        std::cout<< (std::bitset<4>{1010} & std::bitset<4>{1001});  // if both are 1 will returns 1 --> 1000
        std::cout<< (std::bitset<4>{1010} & std::bitset<4>{1001} & std::bitset<4>{0101});  // if one of bits are 1 will returns 1 --> 0000
        // ^
        std::cout<< (std::bitset<4>{1010} ^ std::bitset<4>{1001});  // if just one of them are 1 will returns 1 --> 0011
        std::cout<< (std::bitset<4>{1010} ^ std::bitset<4>{1001} ^ std::bitset<4>{0101});  // if number of ones are odd will returns 1 --> 0110


    BitMask :
        // binary :
            constexpr std::uint8_t mask0{0b0000'0001};  // represent bit 0  ( ' is for readability )
            constexpr std::uint8_t mask1{0b0000'0010};  // represent bit 1
            constexpr std::uint8_t mask2{0b0000'0100};  // represent bit 2
            constexpr std::uint8_t mask3{0b0000'1000};  // represent bit 3
            constexpr std::uint8_t mask4{0b0001'0000};  // represent bit 4
            constexpr std::uint8_t mask5{0b0010'0000};  // represent bit 5
            constexpr std::uint8_t mask6{0b0100'0000};  // represent bit 6
            constexpr std::uint8_t mask7{0b1000'0000};  // represent bit 7

        // hexadecimal(c++ < 14) : 
            constexpr std::uint8_t mask0{0x01};   // hex for 0000 0001
            constexpr std::uint8_t mask1{0x02};   // hex for 0000 0010
            constexpr std::uint8_t mask2{0x04};   // hex for 0000 0100
            constexpr std::uint8_t mask3{0x08};   // hex for 0000 1000
            constexpr std::uint8_t mask4{0x010};  // hex for 0001 0000
            constexpr std::uint8_t mask5{0x020};  // hex for 0010 0000
            constexpr std::uint8_t mask6{0x040};  // hex for 0100 0000
            constexpr std::uint8_t mask7{0x080};  // hex for 1000 0000
                
        // shift(c++ < 14) :
            constexpr std::uint8_t mask0{1 << 0};   // 0000 0001
            constexpr std::uint8_t mask1{1 << 1};   // 0000 0010
            constexpr std::uint8_t mask2{1 << 2};   // 0000 0100
            constexpr std::uint8_t mask3{1 << 3};   // 0000 1000
            constexpr std::uint8_t mask4{1 << 4};   // 0001 0000
            constexpr std::uint8_t mask5{1 << 5};   // 0010 0000
            constexpr std::uint8_t mask6{1 << 6};   // 0100 0000
            constexpr std::uint8_t mask7{1 << 7};   // 1000 0000
            
        
        // usage :
            std::uint8_t Idk {0b1010'0011};

            // for test function use &
                std::cout<< "bit 1 is " << (Idk & mask1);
                // OR
                std::cout<< "bit 1 is " << ((Idk & mask1) ? "ON\n" : "OFF\n");  // --> ON 
            
            // for set function use |
                Idk |= mask2;           // --> Idk == 1010'0111
                Idk |= (mask4 | mask6); // --> Idk == 1111'0111

            // for reset function use & and ~
                Idk &= ~mask2;            // --> Idk == 1111'0011
                Idk &= (~mask4 | ~mask6); // --> Idk == 1010'0011

            // for flip function use ^
                Idk ^= mask0;           // --> Idk == 1010'0010
                Idk ^= (mask1 | ...);

        // to change multiple bits the above functions are used but to change a single bit bittests are used

        // a better example :
            constexpr std::uint8_t IsHappy    {1 << 0};   // 0000 0001
            constexpr std::uint8_t IsLaughing {1 << 1};   // 0000 0010
            constexpr std::uint8_t IsSad      {1 << 2};   // 0000 0100
            constexpr std::uint8_t IsCrying   {1 << 3};   // 0000 1000
            constexpr std::uint8_t IsMad      {1 << 4};   // 0001 0000
            constexpr std::uint8_t IsHungry   {1 << 5};   // 0010 0000
            constexpr std::uint8_t IsSleep    {1 << 6};   // 0100 0000
            constexpr std::uint8_t IsDead     {1 << 7};   // 1000 0000
            
            std::uint8_t APerson{}; // 0000'0000

            // to make him happy :
                APerson |= (IsHappy | IsLaughing);
                std::cout<< "am i laughing? " << static_cast<bool>(APerson & IsLaughing) <<"\n\n"; // --> 1
                std::cout<< "am i happy? "    << ((APerson & IsHappy) ? "yes, i'm happy\n\n" : "no, i'm not happy\n\n"); // --> "i'm happy"
            // stop laughing :
                APerson &= ~IsLaughing;
                std::cout<< "am i still laughing? " << ((APerson & IsLaughing) ? "yes =)\n\n" : "no :(\n\n"); // --> "no :("
                
----------------------------------------------------------------------------------------------------------------

    int Variable = value;
    // Variable return value
       and
       &Variable return "Address" of Variable

    int x = &Variable;
    // x return Address of Variable
       and
       *x return value is inside of address


    // in real
               "&" is "AddressOf" operator and returns "Address of Variable"
       and
               "*" is "Dereference" operator and returns "Dereference of Address" or "value is in that address"
----------------------------------------------------------------------------------------------------------------

    Pointer : pointer is a variable that holds the memory address of a variable of it's type

        int *ptr;  // holds address of ptr variable which is an int
----------------------------------------------------------------------------------------------------------------

    static and heap memory :

        // full caption is in GPT on madmadpv gmail.
----------------------------------------------------------------------------------------------------------------

    Arrays Pointers :

        int ArrayName[6];
        int *ptr;

        ptr = ArrayName;        // first index (0)
        *ptr = 0;

        ptr++;                  // one more index (0 -> 1)
        *ptr = 1;

        ptr += 1;               // n more indexs (1 -> 2)
        *ptr = 2;

        ptr = &ArrayName[3];    // nth index (3)
        *ptr = 3;

        ptr = ArrayName + 4;    // nth index (0 -> 4)
        *ptr = 4;

        ptr = ArrayName; // start from begin (0)
        *(ptr+5) = 5;           // nth index (0 -> 5)
----------------------------------------------------------------------------------------------------------------

*/

int main()
{
    std::bitset<4> four {0b0101};
    //std::cout<<four.flip(1);
    
            
    return 0;
}
// MadMad_