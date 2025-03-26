#include <iostream>

int main()
{
    con:
    std::cout<<"\nenter first number : ";
    double num1, num2;
    std::cin>>num1;
    std::cout<<"enter second number : ";
    std::cin>>num2;
    
    char var;
    std::cout<<"[ '+' , '-' , '*' , '/' ] : ";
    std::cin>>var;

    switch(var)
    {
        case '+':
            std::cout<<num1<<" + "<<num2<<" =  "<<num1+num2;
            break;
        
        case '-':
            std::cout<<num1<<" - "<<num2<<" =  "<<num1-num2;
            break;
        
        case '*':
            std::cout<<num1<<" * "<<num2<<" =  "<<num1*num2;
            break;
        
        case '/':
            std::cout<<num1<<" / "<<num2<<" =  "<<num1/num2;
            break;
        
        default:
            std::cout<<"\nWTF DO U WANT TO DO ???";
            break;
    }

    std::cout<<"\n\ndo u want to continue? [y/n]\n";
    std::cin>>var;
    if(var=='y' || var=='Y')
        goto con;

    return 0;
}
//MadMad_46