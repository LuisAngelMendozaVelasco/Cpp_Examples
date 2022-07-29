#include <iostream>
#include "../myFunctions.h"
using namespace std;

/*In C++, there are three access specifiers:
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.*/
class Check {
    private:
        int i;
    public:
        /*A constructor is a special type of member function that is called automatically when an object is created.
        In C++, a constructor has the same name as that of the class and it does not have a return type.*/
        Check(): i(0) {  } //Create a constructor. Constructor to initialize i to 0.
        //In C++, we can change the way operators work for user-defined types like objects and structures. This is known as operator overloading.
        void operator ++() {  //Overload ++ when used as prefix.
            ++i; 
        }
        void Display() { 
            cout << "i = " << i << endl; 
        }
};

int main() {
    Check obj;

    //Displays the value of data member i for object obj
    obj.Display();

    //Invokes operator function void operator ++( )
    ++obj; 
  
    //Displays the value of data member i for object obj
    obj.Display();

    askOS();
    return 0;
}