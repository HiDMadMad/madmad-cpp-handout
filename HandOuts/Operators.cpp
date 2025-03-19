#include <iostream>

using namespace std;


///Operators :
/*
    Operators priority :
        ()
        +   -   ++  --  !
        *   /   %
        <   >   <=  >=
        ==  !=
        &&
        ||
        =   +=  -=  *=  /=  %=  &=  |=
        ^=

    |=, &=, ^= are bitwise operators
*/

int main()
{
    int a = 2;
    int b(3);

    int res = (a == b) ? a : b  // if a==b then result=a, else result=b

    int res2 = (a=4, a-1)   // a->4 then 4-1 then res2=answer


    return 0;
}
//MadMad_34
