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
        // if condition is not boolian and is not 0, it is always true

        if variable is boolean :
            if(Variable)  OR  if(!Variable)
                True              False
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

//MadMad_75