#include <iostream>
#include <cmath>


///Operators :

//--------------------------------------------------------------------------------------------------------------
/*
    // Operators Precedence(priority) :
        ** from left to right and top to buttom have more priority **
        ()
        ++  --  !  ~  +  -                 --> + and - are one operand
        *   /   %
        + -
        <<  >>  <=>  <  <=  >  >=
        ==  !=
        &&  ^  ||
        =   +=  -=  *=  /=  %=  &=  ^=  |=
        ,

    |=, &= are bitwise operators
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/* 
    // division(/) :
        if at least one operand is a floating point num, the result will be a floating point num
        else result is integer (for floating point result we can change one of them with static_cast to double) 
                                |
                                +--> static_cast<double>(VariableName)/VariableName2
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    // percent sign(%) :
        the result always between 0 and one less than the second number
        EX:
            x%y = one of 0,1,2,...,y-1 (it depends on the first number)
        if x>0 --> result>0  and  else if x<0 --> result<0
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    // increment and decrement(++ and --) :
        if int x{n}, int y{x++} --> x==n+1 and y==n
        if int x{n}, int y{++x} --> x==n+1 and y==n+1    
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    // comma(,) :
        std::cout<<x++, ++y; --> return ++y (returns result of second expression)
        if z=(a,b) --> z=b
        if z=a,b   --> z=a
*/
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
/*
    // examples :
        int a = 2;
        int b(3);
        int res = (a == b) ? a : b;  // if a==b then result=a, else result=b
                                    // if condition then result1 else result2
        
        int res2 = (a=4, a-1);   // a->4 then 4-1 then res2=answer
        
        int power = pow(a,b);

*/
//--------------------------------------------------------------------------------------------------------------

//MadMad_77