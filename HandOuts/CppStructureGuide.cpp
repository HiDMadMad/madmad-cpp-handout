// includes
#include <iostream>


// name spaces
using namespace std;  //  no need to prefix with "std::" if library is in standard c++ libraries


// constants and macros
#define dah 10
const int MAX_SIZE = 100;


// global variables
int AGlobal;


// functions
void SayHi(char name[MAX_SIZE])
{
    std::cout<<"hi "<<name;
}
float SumOfTwoNums(float num1, float num2)
{
    return num1+num2;
}
float MultOfTwoNums(float num1, float num2);


// classes and structures
class ClassName
{
    private:

    public:
};
struct StructureName
{

};


// main function
int main()
{

    return 0;
}


// functions and classes implementations
float MultOfTwoNums(float num1, float num2)
{
    return num1*num2;
}

//MadMad_57