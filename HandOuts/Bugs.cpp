#include <iostream>

//using namespace std;  // باعث تداخل اسامی در گلوبال نیم اسپیس میشود. درواقع دفنیشن های استاندارد لایبرری رو وارد گلوبال اسکوپ میکند


/// Types of bugs :

//--------------------------------------------------------------------------------------------------------------
/*
    undefined behavior (UB) :
        // Description : ‌when the program executes instructions that the C++ standard does not define
           Example :
                    int x; --> cout<<x;  => program returns an unpredictable value each time
                    OR
                    use unsigned variables
           Signs :
                    - program returns an unpredictable value each time
                    - program returns a same false value each time
                    - program produces correct results sometimes and incorrect results at other times
                    - program runs in some IDEs and fails in others
                    - program crashes
                    ...

    ------------------------------------------------------------------------------------------------------------

    collision :
        Description : when we have two or more definitions in global namespace with same names
        Example :
                    #include <iostream>
                    #include <string>

                    std::string cout()
                    {
                        return "wtf =)";
                    }

                    int main()
                    {
                        std::cout<< cout();

                        return 0;
                    }
                    // if we write using namesapce std, we get a bug for function
        Sings :
                - linker error(in multi files)
                - compiler error(in one file)

    ------------------------------------------------------------------------------------------------------------

    Name? :
        Example :
                    double d1{1};
                    double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1}
                    // d1 != d2

    ------------------------------------------------------------------------------------------------------------

    Name? :
        Description : if compiler use IEEE754
        Example :
                    double zero {0};
                    PosInf {5 / zero};
                    NegInf {-5 / zero};
                    NaN {zero / zero};

                    // return inf and -inf and nan
    
    ------------------------------------------------------------------------------------------------------------
*/
//--------------------------------------------------------------------------------------------------------------

//MadMad_72