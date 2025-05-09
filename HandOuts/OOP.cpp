#include <iostream>


// For a better reading experience, remove the star(/* -> /) at the beginning of each part before reading

/// Object Oriented Programming :

//--------------------------------------------------------------------------------------------------------------  
    // Class :
        // Informations :
            /*
                                    +--> Data : argument || attribute || property
                class --> object : -+
                                    +--> Behavior : function || method
            */

            /*
                +-----------------------+
                |      Class  Name      |
                +-----------------------+
                |   Attributes Names    |----> for image shows
                +-----------------------+
                |    Methods  Names     |
                +-----------------------+
            */

            /*
                +-------------------+
                |class ClassName    |
                |{                  |
                |    attributes;    +----> in code
                |    methods();     |
                |};                 |
                +-------------------+
            */

            /*
                +-----------------------------------------------------------+
                |access modifiers :                                         |
                |                                                           |
                |public : have access in class & main code & derived class. |
                |                                                           |
                |private : have access in class.                            |
                |                                                           |
                |protected : have access in class & derived class.          |
                +-----------------------------------------------------------+
            */

            /*
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
            */

            /*
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
            */

            /*
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
            */

            /*
                +-------------------------------------------+
                |use attributes and methods with pointers : |
                |                                           |
                |ClassName ObjectName;                      |
                |ClassName *ptr = &ObjectName;              |
                |ptr->Method(); || ptr->Attribute;          |
                +-------------------------------------------+
            */

            /*
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
            */
            
            /*
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
            */

            /*
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
            */

            /*
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
            */

            /*
                +-------------------------
                |abstract class :
                | ...
            */


        // Examples :
            class Student{
                private :
                    string name; 
                    float score1;
                    float score2;
                public :
                    void InputAtts()
                    {
                        cout<<"enter name : ";
                        cin>>name;
                        cout<<"enter scores :\n";
                        cin>>score1>>score2;
                    }
                    void ShowAtts()
                    {
                        cout<<"\n\nname : "<<name<<"\nmean of scores : "<< grade(score1, score2)<< "\n\n\n";
                    }
                    float grade(float score1, float score2)
                    {
                        return (score1+score2)/2.0;
                    }
                };
            // in main() :
                const int NumOfStds{5}; // #define NumOfStds 10
                
                Student student1;               // --> one object from Student
                Student students[NumOfStds];    // --> n objects from Student
                


                student1.name = "mml";  //  |
                student1.point1 = 12;   //  |--> if attributes are public 
                student1.point2 = 14;   //  +------------------------------+
                cout<<student1.grade(student1.point1, student1.point2); // |
                // OR -------------------------------------------------------------
                for(int i=0; i<MaxOfStds; i++)
                {
                    students[i].InputAtts();
                }
                for(int i=0; i<MaxOfStds; i++)
                {
                    students[i].ShowAtts();
                }
//--------------------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------------------
    // Structure :
        // Informations :
            // just like a class, but attributes, methods, and inheritance are public by default
            // it's good for simple tasks

            /*
                +---------------------+
                |struct StructName    |
                |{                    |
                |    attributes;      +----> in code
                |    methods();       |
                |};                   |
                +---------------------+
            */
        
        // Examples :
            struct Student{
                string name;
                float GPA;
            };
            // in main() :
                const int NumOfStds{2};
                Student students[NumOfStds];
                for(int i=0; i<NumOfStds; i++)
                {
                    cin>>students[i].GPA;
                }
                float MeanOfGPAs;
                for(int i=0; i<NumOfStds; i++)
                {
                    MeanOfGPAs += students[i].GPA;
                }
                std::cout<<MeanOfGPAs/NumOfStds;
//--------------------------------------------------------------------------------------------------------------

//MadMad_313