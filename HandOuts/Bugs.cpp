#include <iostream>

using namespace std;    // It causes name conflicts in the global namespace, It effectively 
//                         brings the standard library definitions into the global scope


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
                    // if we write using namespace std, we get a bug for function
        Sings :
                - linker error(in multi files)
                - compiler error(in one file)

    ------------------------------------------------------------------------------------------------------------

    collision2 :
        Description : when we have two or more definitions in our projects
        Example : 
                    one file has a DoSomething() function that adds two numbers, and another file
                    has a DoSomething() that subtracts them. In main file, when we call DoSomething, 
                    it doesn't know which one to run.
        
        Solutions :
                    1- change name of functions --> it takes a lot of time and might cause bugs
                    2- user defined namespace
                        initialize :
                            namespace name
                            {
                                functions...
                            }
                        usage :
                            name::function();
                            OR
                            using namespace name;
                            function();
                        tip :
                            if ::function(); --> it directly goes to global namespace to find function
                            if function();   --> it goes up step by step through namespaces until it reaches the function
    ------------------------------------------------------------------------------------------------------------

    Floating-Point Precision Error :
        Example :
                    double d1{1};
                    double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1}
                    // d1 != d2

    ------------------------------------------------------------------------------------------------------------

    IEEE 754 Special Values(NaN) :
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

//MadMad_98