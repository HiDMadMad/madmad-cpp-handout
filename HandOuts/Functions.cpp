#include <iostream>
#include <math.h>


/// Functions :

//--------------------------------------------------------------------------------------------------------------
/*
    // to create :
        ReturnType FunctionName(Parameters..)
        {
            Commands;
            return value;  // return type must match with function type
        }
    // to use :
        FunctionName(Arguments..);

    // void functions have no return value

    // function overloading :  If there are two or more functions
       with the same name but different input parameters (either in type or number),    ***
       the compiler chooses the appropriate function based on the provided arguments
       (inputs must be different)

    // recursive function : is a function that calls itself to solve a problem
       in smaller steps and It must have a base case to stop recursion                  ***
       otherwise it will lead to infinite recursion and program crash
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
int Calculation(double x, double y, int z)
{
    int res = pow((x+y), z);
    return res;

    // return pow((x+y), z);
}

void GetArray(double Array[], const int ArraySize)
{
    /* to automatically get ArraySize :
        int ArraySize = sizeof(Array)/sizeof(Array[0])
    */
    for(int i=0; i<ArraySize; i++)
    {
        cin>>Array[i];
    }
}

void DefinedBelow(); // for identification during the compile phase

void SayHi()
{
    cout<<"hi";
}

void SayHi(string Name)
{
    cout<<"hi "<<Name;
}

long int fact(int x)
{
    if(x<=1)
        return 1;
    return (x * fact(x-1));
}


int main()
{
    cout<<fact(3);


    return 0;
}


void DefinedBelow() // for use in runtime phase
{
    cout<<"Defined Below.";
}
//--------------------------------------------------------------------------------------------------------------

//MadMad_86