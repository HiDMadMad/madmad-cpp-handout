#include <iostream>


/// Conditions :

//--------------------------------------------------------------------------------------------------------------
/*
    // Normal If :
        if(condition)
        {
            commands;
        }
        else if(condition)
        {
            commands;
        }
        else if(condition)
        {
            commands;
        }
        .
        .
        .
        else
        {
            commands;
        }

        // if command is one line dosn't matter if {} is write or not
        // if condition is not boolean and is not 0, it is always true

        if variable is boolean :
            if(Variable)  OR  if(!Variable)
                True      ||      False
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    // Switch Case :
        switch(VariableName)
        {
            case Value1:
                Commands;
                break;

            case Value2:
                Commands;
                break;
            .
            .
            .
            default :
                Commands;
                break;
        }

        // if Variable value == each value, commands on that case will run

        // if we don't write break, all cases will run
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    // (? :) operator :
        int res = (a == b) ? a : b;  // if a==b then result=a, else result=b
                                    // if condition then result1 else result2

            constexp IsCold {true};              |
            constexp HeaterStatus {IsCold?1:0};  |--> if IsCold is true ==> Heater turns on. otherwise, Heater turns off.
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    // #if && #ifdef && #endif :
        #ifdef MY_PASS
            std::cout<<"if MY_PASS defined with #define, so thats will run";  // even defined in main() or any function
            cout<<MY_PASS;
        #endif
        --------------------
        #ifndef USER_NAME
            std::cout<<"if USER_NAME undefined with #define, so thats will run";  // even defined in main() or any function
            #define USER_NAME;
        #endif
        --------------------
        #if 0
            std::cout<<"never run"  // This code is disabled because #if 0 evaluates to false
        #endif
        --------------------
        #ifdef _WIN32
            std::cout<<"running on windows";
        #elif __linux__
            std::cout<<"running on linux";
        #else
            std::cout<<"running on mac";
        #endif
*/
//--------------------------------------------------------------------------------------------------------------

//MadMad_102