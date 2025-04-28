#include <iostream>
#include <bitset>
#include <cstdint>


/// Memory Management :

//--------------------------------------------------------------------------------------------------------------
/*
    Do Doi (Binary) : 0, 1                                                             --> 0bNum -->11--> with bitset library
        0101110 means : 0*(2^6) + 1*(2^5) + 0*(2^4) + 1(2^3) + 1(2^2) + 1(2^1) + 0(2^0)  =  46
    
    Hasht Hashti (Octal) : 0, 1, 2, 3, 4, 5, 6, 7                                      --> 0Num  -->11--> std::cout<<sdt::oct<<013
    
    Dah Dahi (Decimal) : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9                                  --> Num   -->11--> std::cout<<sdt::dec<<11  or normal cout
        2983    means : 2*(10^3) + 9*(10^2) + 8(10^1) + 3*(10^0)

    Shanzdah Shanzdahi (HexaDecimal) : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F  --> 0xNum -->11--> std::cout<<sdt::hex<<0xB


    n : 0   1   2   3   4    5    6
        |   |   |   |   |    |    |    
        1   2   4   8   16   32   64   ...
    EX: 0   1   0   0   1    0    0  -------> 1*0 + 2*1 + 4*0 + 8*0 + 16*1 + 0*32 + 0*64 --> Dah Dahi = 18

    so --> nBit = 2^n nums --> with n bits, we can represent up to 2^n numbers
    like --> 4bits --> 0000, 0001, 0010, 0011, 0100, 0101, 0110, 0111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111
                        0     1     2     3     4     5     6     7     8     9     10    11    12    13    14    15


    0.1 --> 0.0001100110011...∞
 

    // decimal to binary convert :
        divide by two :
            example : 
                146 :
                    146/2 --> q=73 & r=0
                    73/2  --> q=36 & r=1
                    36/2  --> q=18 & r=0
                    18/2  --> q=9  & r=0
                    9/2   --> q=4  & r=1
                    4/2   --> q=2  & r=0
                    2/2   --> q=1  & r=0
                    1/2   --> q=0  & r=1
                from bottom to top : 10010010 = 146

        biggest power :
            example :
                146 :
                    find the largest power of two less than the target number --> 2^7 = 128
                    (146>=128)        ? 1 : 0 --> 1
                    ( (146-128)>=64 ) ? 1 : 0 --> 0
                    ( (146-128)>=32 ) ? 1 : 0 --> 0
                    ( (146-128)>=16 ) ? 1 : 0 --> 1
                    ( (18-16)>=8    ) ? 1 : 0 --> 0
                    ( (18-16)>=4    ) ? 1 : 0 --> 0
                    ( (18-16)>=2    ) ? 1 : 0 --> 1  
                    ( (2-2)>=1      ) ? 1 : 0 --> 0
                place them in order : 10010010 = 146


    // sum of two binaries :
        if 0+0 = 0
        if 0+1 = 1
        if 1+0 = 1
        if 1+1 = 0 & << 
        if 1+1+1 = 1 & <<


    // two's complement(signed numbers in binary) :
        //the leftmost bit is considered the sign bit (1 for negative and 0 for positive)
        -5 --> (5:00000101) --> (flip() -> 11111010) --> (+1 -> 00000001) --> 00000101
                                                                              11111010
                                                                              00000001
                                                                             +_________
                                                                              11111011 = -5
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
    // BitSet :
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
            // flip(2)  --> switch flag[2] from 0 to 1 OR 1 to 0
            OctBit.set(2);


    // Bitwise Operators :
        // << : left shift
        // >> : right shift
        // ~  : bitwise not
        // &  : bitwise and
        // |  : bitwise or
        // ^  : bitwise xor
        
        // usages are for BitSets, Integrals(integer types(bool, char, int, ..) (unsigned) )

        std::bitset<4>biti{0b1100};
        // it creates a new value and return that
        
        // biti       -->  1100
        // biti >> 1  -->  0110
        // biti << 1  -->  1000
        // biti<<=1   -->  biti == 1000
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


    // BitMask :
        // binary :
            constexpr std::uint8_t BinMask0{0b0000'0001};  // represent bit 0  ( ' is for readability )
            constexpr std::uint8_t BinMask1{0b0000'0010};  // represent bit 1
            constexpr std::uint8_t BinMask2{0b0000'0100};  // represent bit 2
            constexpr std::uint8_t BinMask3{0b0000'1000};  // represent bit 3
            constexpr std::uint8_t BinMask4{0b0001'0000};  // represent bit 4
            constexpr std::uint8_t BinMask5{0b0010'0000};  // represent bit 5
            constexpr std::uint8_t BinMask6{0b0100'0000};  // represent bit 6
            constexpr std::uint8_t BinMask7{0b1000'0000};  // represent bit 7

        // hexadecimal(c++ < 14) : 
            constexpr std::uint8_t HexMask0{0x01};   // hex for 0000 0001
            constexpr std::uint8_t HexMask1{0x02};   // hex for 0000 0010
            constexpr std::uint8_t HexMask2{0x04};   // hex for 0000 0100
            constexpr std::uint8_t HexMask3{0x08};   // hex for 0000 1000
            constexpr std::uint8_t HexMask4{0x010};  // hex for 0001 0000
            constexpr std::uint8_t HexMask5{0x020};  // hex for 0010 0000
            constexpr std::uint8_t HexMask6{0x040};  // hex for 0100 0000
            constexpr std::uint8_t HexMask7{0x080};  // hex for 1000 0000
                
        // shift(c++ < 14) :
            constexpr std::uint8_t ShMask0{1 << 0};  // 0000 0001
            constexpr std::uint8_t ShMask1{1 << 1};  // 0000 0010
            constexpr std::uint8_t ShMask2{1 << 2};  // 0000 0100
            constexpr std::uint8_t ShMask3{1 << 3};  // 0000 1000
            constexpr std::uint8_t ShMask4{1 << 4};  // 0001 0000
            constexpr std::uint8_t ShMask5{1 << 5};  // 0010 0000
            constexpr std::uint8_t ShMask6{1 << 6};  // 0100 0000
            constexpr std::uint8_t ShMask7{1 << 7};  // 1000 0000
            
        
        // usage :
            std::uint8_t Idk {0b1010'0011};

            // for test() function use &
                std::cout<< "bit 1 is " << (Idk & BinMask1);
                // OR
                std::cout<< "bit 1 is " << ((Idk & BinMask1) ? "ON\n" : "OFF\n");  // --> ON 
            
            // for set() function use |
                Idk |= BinMask2;           // --> Idk == 1010'0111
                Idk |= (BinMask4 | BinMask6); // --> Idk == 1111'0111

            // for reset() function use & and ~
                Idk &= ~BinMask2;            // --> Idk == 1111'0011
                Idk &= (~BinMask4 | ~BinMask6); // --> Idk == 1010'0011

            // for flip() function use ^
                Idk ^= BinMask0;           // --> Idk == 1010'0010
                // Idk ^= (BinMask1 | ...);

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

        // another example :
            void ExFunc(bool option1, bool option2, ..., bool option32);  // ×
            ExFunc(False, True, ..., True);                               // ×

            void ExFunc2(std::bitset<32> options);                        // ✔
            ExFunc2(options2 | options32);                                // ✔
        
        // RGB example for multi bitmask :
            /*
                red & green & blue each are use 8bits from 0to255
                for example (red is 255/0/0) OR (purple is 255/0/255)
                alpha value controls transparency(0 means fully transparent, 255 means fully opaque) 

                00000000'00000000'00000000'00000000
                  red     green     blue    alpha
                  [24]     [16]     [08]     [00]
                   to       to       to       to
                  [31]     [23]     [15]     [07]
            
            */

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

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    int Variable = value;
        Variable return value
        and
        &Variable return "Address" of Variable
    

    int x = &Variable;
        x return Address of Variable
        and
        *x return value is inside of address


    in real
       "&" is "Address-Of Or Reference-Of " operator and returns "Address of Variable"
    and
       "*" is "Dereference" operator and returns "Dereference of Address" or "value is in that address"
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
//  Pointer : pointer is a variable that holds the memory address of a variable of it's type

        int *APointer;  // holds address of APointer variable which is an int

        // Tip :
            int *ptr1, *ptr2; 
            ptr1 = ptr2; //-->  هرجا یک اشاره کنه دو هم اشاره میکنه

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
//  static and heap memory :
        // full caption is in GPT on madmadpv gmail.
        // some of that is in "Arrays.cpp" file.
        int *NewPtr, ANum=10;
        NewPtr = &ANum;
        // --> *NewPtr == 10;
        NewPtr = new int;     // or ?
        *NewPtr = 11;
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
//  Arrays Pointers :

        int ArrayName[6];
        int *ptr=0; // or NULL

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

        ptr = ArrayName;        // start from begin (0)
        *(ptr+5) = 5;           // nth index (0 -> 5)
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
//  character pointer :
        char CharOfChars[] {"hell"};
        char *PtrToChar = CharOfChars;
        int i = 0;
        while(PtrToChar[i]!='\0')
        {
            std::cout<<PtrToChar[i];
            i++;
        }
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
//  Returning multiple variables from a function :
        // using pointers :
            void ModifyPersonInfo(int *age, double *hight)
            {
                (*age)++;
                (*hight) += 0.5;
            }
            // in main :
                int PersonAge{18};
                double PersonHight{1.7};
                std::cout<<"before : "<<PersonAge<<'\t'<<PersonHight<<'\n';
                ModifyPersonInfo(&PersonAge, &PersonHight);
                std::cout<<"after : "<<PersonAge<<'\t'<<PersonHight<<'\n';

        // using references :
            void ModifyWeatherInfo(int &temperature, double &pressure)
            {
                temperature += 3;
                pressure -= 2.25;
            }
            // in main :
                int WeatherTemp{24};
                double WeatherPress{19.5};
                std::cout<<"before : "<<WeatherTemp<<'\t'<<WeatherPress<<'\n';
                ModifyWeatherInfo(WeatherTemp, WeatherPress);
                std::cout<<"after : "<<WeatherTemp<<'\t'<<WeatherPress<<'\n';

        // using struct :
            struct Student
            {
                int age;
                double grade;
            };
            void ModifyStudentInfo(Student &AStudent)
            {
                AStudent.age++;
                AStudent.grade += 0.25;
            }
            // in main
                Student student1 = {18, 15.6};
                std::cout<<"before : "<<student1.age<<'\t'<<student1.grade<<'\n';
                ModifyStudentInfo(student1);
                std::cout<<"before : "<<student1.age<<'\t'<<student1.grade<<'\n';
//--------------------------------------------------------------------------------------------------------------

// MadMad_374