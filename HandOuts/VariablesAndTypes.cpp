#include <iostream>  // cin & cout & ..
#include <string>    // for strings in standard library
//#include <string.h>  // for strings in old library
#include <cstdint>


#define NL "\n"
#define YAZDAH 11
#define MY_NAME "MadMad"
// cout<<YAZDAH<<NL<<MY_NAME;
// have no effect on other files


#ifdef MY_PASS
    cout<<"if MY_PASS defined with #define, so thats will run"; // even in main() or any function
    cout<<MY_PASS;
#endif

#ifdef USER_NAME
    cout<<"if USER_NAME undefined with #define, so thats will run"; // even in main() or any function
    cout<<USER_NAME;
#endif

#if 0
    cout<<"never run" // even in main()
#endif


using namespace std;  //  no need to prefix with "std::" if library is in standard c++ libraries


int main()
{
    // https://cplusplus.com/doc/tutorial/variables/

    // data types :
    //              primitives : int, float, char, bool, void, null
    //              compound : string

    // signed DataType --> -∞ to +∞  --> -(2^n-1) to (2^n-1)-1    default: short, int, long, long long
    // unsigned DataType --> 0 to +∞ --> 0 to (2^n)-1
    signed   int   VariableName  = 1;
    unsigned short VariableName2 = 2; // like age


    // 32bit variable works better in 32bit computers and ...


    char          TChar    = '8';        // 1bit to 8bits
    char16_t      TLChar   = '16';       // 1bit to 16bits
    char32_t      TLLChar  = '32';       // 1bit to 32bits
    wchar_t       TWChar   = '8';        // 8bits
        char ch = 'a';
        char chh {97}; // asci code for a
        cout<<chh<<NL;
        // just for one character
        // escape sequances are characters ('\n', '\t', ...)


    string        TString  = "8";        // 1bit per character
        // strings initialize :
        string str1 = "no difference";
        string str2 {"no difference"};
        // strings accesses :
        str1[2]; // --> " "
        str1[4]; // --> "i"
        str2[7]; // --> "e"
        //str2[out of range] --> " "
        str1[1] = 'x';
        str2[3] = 'xo'; // --> o sits instead of d
    
    int           TInt     = 32;        // 16bits to 32bits
    int16_t       T16Int   = 16;        // 16bits                from -128 to 127
    uint16_t      TU16Int  = 16;        // 16bits                from 0 to 255
    int_least16_t TL16Int  = 16;        // 16bits                حداقل 16 یا اگه سازگار نبود یکی بیشتر و ... , unsigend
    int_fast16_t  TF16Int  = 16;        // 16bits                بهینه ترین و اگه نشد یکی بالا تر , unsigned
    // ... and they are have constant size
    short int     TSInt    = 16;        // 16bits               OR short
    long int      TLInt    = 64;        // 32bits to 64bits     OR long
    long long int TLLInt   = 64;        // 64bits               OR long long

    float         TFloat   = 32.0f;     // 32bits               6-9 numbers after point
    double        TDouble  = 64.0;      // 64bits               15-18 numbers after point
    long double   TLDouble = 128.0;     // 64bits to 128bits
    // deghat "cout" is 6 numbers but it can changed with "setprecision" function from "iomanip" library
    // EX: cout<<setprecision(17)

    bool          TBool    = true;      // 1bit                 default -> false or 0, any value exept 0 is true(default --> 1)
    // cin --> any value exept 0&1 become 0(false) ---> cin>>boolalpha & cout<<boolalpha

    auto          TAuto    = "anything";// automatically determines the data type

/*
    get size of variable type :
        cout<<sizeof(DataType) // return Byte
        cout<<sizeof(VariableName) // return Byte
*/

/*
    get type of variable :
        cout<<typeid(VariableName).name() // return VariableType initial letter
*/

    // Initializing :
        int initialize;         // default initialization (higher performance but higher risk of bugss)
        int initialize2 = 2;    // copy initialization (more efficient in simple DataTypes)
        int initialize3(3);     // direct initialization (more efficient in complex DataTypes, but not all DataTypes(lists))
        int initialize4{4};     // uniform initialization (more efficient in complex DataTypes)
        /*
            Warning :
            // int x = {3.7} --> ERROR
               int x =  3.7  --> x->3
        */
        int initialize5=5, initialize6(6), initialize7;
        double initialize8{2.56e23}; // 2.56 * 10^23
        double initialize9{2.56e-23}; // 2.56 * 10^(-23)


    //const DataType VariableName;
        const int age = 18; // can't be changed


    // OverFlow :
        unsigned short int a = 65535;
        unsigned short int b = 65536;
        cout<<a<<NL<<b<<NL;

        signed short int c = 32767;
        signed short int d = 32768;
        cout<<c<<NL<<d<<NL;
        // for every overflow, it restarts from zero by the same amount (OverFlow NeonLearn S4 T1:03:37)


/*
    type conversions :
	        implicit : auto converts : like function get double but we get integer so compiler convert integer to double and use value
            
            explicit : manual converts : convert with static_cast<DataType>(VariableName OR VariableValue) syntaxt
                float x = 2.2;
                std::cout<<x<<'\n';
                auto x2 = static_cast<int>(x);
                std::cout<<x2;
*/


    return 0;
}
//MadMad_