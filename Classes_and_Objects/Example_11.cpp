////////////////////////////////////////////////////////////////////////////
// Inheritance - inherit attributes and methods from one class to another //
////////////////////////////////////////////////////////////////////////////

/*
Inheritance
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
- Derived class (child) - the class that inherits from another class.
- Base class (parent) - the class being inherited from.
To inherit from a class, use the : symbol.
*/

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

// Base class
class Vehicle {
    public: 
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n" ;
        }
};

// Derived class
class Car: public Vehicle {
    public: 
        string model = "Mustang";
};

int main() {
    Car myCar;

    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;

    askOS();
    return 0;
}

/*
Output:

Tuut, tuut! 
Ford Mustang
*/