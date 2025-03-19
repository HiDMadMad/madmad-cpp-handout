#include <iostream>

using namespace std;

double Sum(double x, double y);
double Minus(double x, double y);
double Multiplication(double x, double y);
double Division(double x, double y);

int main()
{
    double num1, num2;
    int cal;
    cout<<"enter first num : ";
    cin>>num1;

    cout<<"\nenter Calculation type :\n"
          "1 for sum.\n"
          "2 for minus.\n"
          "3 for multiplication.\n"
          "4 for division.\n";
    cin>>cal;

    cout<<"\nenter second num : ";
    cin>>num2;

    switch(cal)
    {
        case(1):
            cout<<"----------------------------\n\nAnswer is :"<<Sum(num1, num2);
            break;
        case 2:
            cout<<"----------------------------\n\nAnswer is :"<<Minus(num1, num2);
            break;
        case 3:
            cout<<"----------------------------\n\nAnswer is :"<<Multiplication(num1, num2);
            break;
        case 4:
            cout<<"----------------------------\n\nAnswer is :"<<Division(num1, num2);
            break;
        default:
            cout<<"???";
    }

    cout<<"\n\nenter anything to exit.  ";
    cin>>cal;


    return 0;
}
//MadMad_51
