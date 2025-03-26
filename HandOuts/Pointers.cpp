#include <iostream>

using namespace std;


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


    return 0;
}
// MadMad_81
