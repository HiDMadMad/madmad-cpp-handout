#include <iostream>

using namespace std;


/// Object Oriented :
/*  Informations :
                        +--> Data : argument || attribute || property
    class --> object : -+
                        +--> Behavior : function || method

    +-----------------------+
    |      Class  Name      |
    +-----------------------+
    |   Attributes Names    |----> for image shows
    +-----------------------+
    |    Methods  Names     |
    +-----------------------+

    +-------------------+
    |class ClassName    |
    |{                  |
    |    attributes;    +----> in code
    |    methods();     |
    |};                 |
    +-------------------+

    +-----------------------------------------------------------+
    |access modifiers :                                         |
    |                                                           |
    |public : have access in class & main code & derived class. |
    |                                                           |
    |private : have access in class.                            |
    |                                                           |
    |protected : have access in class & derived class.          |
    +-----------------------------------------------------------+

    +------------------------------------------------------------------------------------+
    |Constructor :                                                                       |
    |                                                                                    |
    |public:                                                                             |
    |   ClassName( Parameters.. )                                                        |
    |   {                                                                                +----------------------------------------------------+
    |       SetAttribute1(Parameter1);  ||  Attribute1 = Parameter1;  ||  this->Attribute1 = Parameter1  ||  (*this).Attribute1 = Parameter1  |
    |       SetAttribute2(Parameter2);  ||  Attribute2 = Parameter2;  ||  this->Attribute2 = Parameter2  ||  (*this).Attribute2 = Parameter2  |
    |       // 'this' can't be useed in friend methods                                   +----------------------------------------------------+
    |   }                                                                                |
    |   ClassName()                                                                      |
    |   {                                                                                |
    |       Attribute1 = value;                                                          |
    |       Attribute2 = value;                                                          |
    |   }                                                                                |
    |                                                                                    |
    |   // or instead of using the second constructor, we can                            |
    |      set the values to the first constructor Parameters                            |
    |                                                                                    |
    |   // or this one in general :                                                      |
    |public:                                                                             |
    |   ClassName(Parameters=values..) : Attribute1(Parameter1), Attribute2(Parameter2)  |
    |   {                                                                                |
    |   }                                                                                |
    |                                                                                    |
    |   // now it doesn't make difference we take Parameters or not                      |
    |      we can add constructor outside of class(SEARCH)                               |
    +------------------------------------------------------------------------------------+

    +--------------------------------------------------------+
    |writing method outside of class :                       |
    |                                                        |
    |public:                                                 |
    |   void MethodName(Parameters..);                       |
    |                                                        |
    |void ClassName::MethodName(Parameters..)                |
    |{                                                       |
    |   Commands...;                                         |
    |}                                                       |
    |                                                        |
    |// function's type, name, and inputs inside and outside |
    |   the class must be the same.                          |
    +--------------------------------------------------------+

    +--------------------------------------------------+
    |Destructor :                                      |
    |// delete created objects when the program ends   |
    |public:                                           |
    |   ~ClassName()                                   |
    |   {                                              |
    |       // code in this section runs once for each |
    |          created object when the program ends    |
    |   }                                              |
    +--------------------------------------------------+

    +-------------------------------------------+
    |use attributes and methods with pointers : |
    |                                           |
    |ClassName *ptr = &ObjectName;              |
    |ptr->Method(); || ptr->Attribute;          |
    +-------------------------------------------+

    +----------------------------------------+
    |constant methods and objects :          |
    |                                        |
    |public:                                 |
    |   void MethodName(Parameters..) const; |
    |                                        |
    |void MethodName(Parameters..) const     |
    |{                                       |
    |   Commands..;                          |
    |}                                       |
    |                                        |
    |const ClassName ObjectName;             |
    |                                        |
    |// const objects can only use const     |
    |   methods and attributes               |
    +----------------------------------------+

    +---------------------------------------------------+
    |access to private attributes and methods :         |
    |                                                   |
    |private:                                           |
    |   AttributeName = value;                          |
    |   MethodName();                                   |
    |                                                   |
    |public:                                            |
    |   friend void MethodName2(ClassName &ObjectName); |
    |                                                   |
    |void MethodName2(ClassName &ObjectName);           |
    |{                                                  |
    |   ObjectName.AttributeName;                       |
    |   ObjectName.MethodName();                        |
    |}                                                  |
    |                                                   |
    |ClassName ObjectName2;                             |
    |MethodName2(ObjectName2);                          |
    +---------------------------------------------------+

    +---------------------------------------------------------------------+
    |Performing operations like addition, subtraction,.. on two objects : |
    |                                                                     |
    |public:                                                              |
    |   MyClass operator+(MyClass &obj)                                   |
    |   {                                                                 |
    |       MyClass result;                                               |
    |       result.var = this->var + obj.var;                             |
    |       return result;                                                |
    |   }                                                                 |
    |   MyClass operator *(MyClass &obj)                                  |
    |   {                                                                 |
    |       MyClass result;                                               |
    |       result.var = this->var - obj.var;                             |
    |       return result;                                                |
    |   }                                                                 |
    |                                                                     |
    |   // operations inside the method have nothing to                   |
    |      do with the operator                                           |
    +---------------------------------------------------------------------+

    +---------------------------------------------------------------------------+
    |Inheritance :                                                              |
    |                                                                           |
    |MotherClass                                                                |
    |{                                                                          |
    |   public:                                                                 |
    |       MotherClass(){};                                                    |
    |       void Hello()                                                        |
    |       {                                                                   |
    |           commands..;                                                     |
    |       }                                                                   |
    |   private:                                                                |
    |       int age;                                                            |
    |}                                                                          |
    |                                                                           |
    |FirstChildrenClass : public MotherClass                                    |
    |{                                                                          |
    |   public:                                                                 |
    |       FirstChildrenClass(){};                                             |
    |}                                                                          |
    |                                                                           |
    |SecondChildrenClass : private MotherClass, public FirstChildrenClass       |
    |{                                                                          |
    |   public:                                                                 |
    |       SecondChildrenClass(){};                                            |
    |}                                                                          |
    |                                                                           |
    |// public inheritance: Public and protected members of the base class      |
    |   remain public and protected in the derived class.                       |
    |                                                                           |
    |// protected inheritance: Public and protected members of the base class   |
    |   become protected in the derived class.                                  |
    |                                                                           |
    |// private inheritance: All public and protected members of the base class |
    |   become private in the derived class.                                    |
    +---------------------------------------------------------------------------+

    +-------------------------
    |abstract class :
    |

*/

int main()
{


    return 0;
}
//MadMad_207
