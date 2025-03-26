#include <iostream>  // cin & cout & ..
#include <string>    // for strings in standard library
//#include <string.h>  // for strings in old library
#include <string_view>
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


    string        TString  = "8";        // 1bit per character  and  it creates copy  and  needs to include string
    // const char[NumberOfCharacters];
    // ***** avoid pass by value because it makes a copy each time *****
        // strings initialize :
            std::string str1 = "no difference";
            std::string str2 {"no difference"};
            // strings accesses :
            str1[2]; // --> " "
            str1[4]; // --> "i"
            str2[7]; // --> "e"
            //str2[out of range] --> " "
            str1[1] = 'x';
            str2[3] = 'xo'; // --> o sits instead of d
        // get string :
            std::string name{};
            std::string age{};
            int agge{};
            //std::cin>>name;  |--> logical error
            //std::cin>>age;   |
            std::getline(std::cin>>std::ws, name);
            std::getline(std::cin>>std::ws, age);
            //std::getline(std::cin>>std::ws, agge); --> syntax error
            /*
                If the name has two parts, cin takes the first part before the space. 
                If the second variable is a string, it gets the rest; else if the second variable isn't string, 
                cin isn’t cleared, and the next variable becomes 0.
                So we can use std::get_line(std::cin>>std::ws, VariableName);  but it's just for strings
                                                        |
                                                        +--> this changes cin behavior(ignore spaces, \n, \t, ...)
            */
        // get size of string :
            StringVariableName.length();
            // std::ssize(StringVariableName);  2020 standard
            // to save length :
                //EX:
                int length = static_cast<int>(StringVariableName);
    
    
    string_view   TStringV = " ";       // 1bit per character  and  this is read only  and  needs to include string_view
    // ***** function's return type shouldn't be string_view *****
        const string_view SV {"ConstStringView"};
        constexpr string_view SVE {"ConstExpStringView"};
        std::string S {"madmad"};
        std::string_view SV2 {S};
        void PrintS(std::string_view SV) {std::cout<<SV;} --> PrintS(S);  // static_cast string to string_view
        static_cast<std::string>(SV2) // ststic_cast string_view to string



    int           TInt     = 32;        // 16bits to 32bits
    int16_t       T16Int   = 16;        // 16bits                from -128 to 127   treated as char
    uint16_t      TU16Int  = 16;        // 16bits                from 0 to 255      treated as char
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
        const int age {18}; // can't be changed so it must be initialized
        double const gravity {9.8} // this is correct too, but the above syntax is more accurate
        const string name {"madmad"};
        constexpr string_view name2 {"madmad"};
        /*
            const --> can be compile time constant(const int one = 1;) or run time constant(const int integer = GetInteger();)
                      void five() {return 5} --> const int fivve = five(); --> it's run time constant
            constexpr --> is compile time constant(constexpr two = 1+2 || ...)

            So constexpr makes constants compile-time and full optimizes the program, but can cause errors if not set correctly.
            But const doesn’t guarantee that value is compile-time constant; it can be runtime constant.
        */

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
                                         creates a completely new value
                float x {2.2};
                std::cout<<x<<'\n';
                auto x2 = static_cast<int>(x);
                std::cout<<x2;
*/

    
    // Literals :
        std::cout<<3.8;  // --> 3.8 is double
        std::cout<<3.8f; // Or 3.8F --> 3.8 is float
        float f {8.3};   // --> 8.3 is double
        float f {8.3F};   // Or 8.3f --> 8.3 is float
        // D||d for double , F||f for float , L||l for long int , S||s for strings(" "s) , sv for string_views(""sv)
        //                                                                 |                      |
        //                           using namespace std::Literals;     <--+----------------------+

        
    return 0;
}
//MadMad_