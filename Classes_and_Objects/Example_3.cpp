//////////////////////////
// Create class methods //
//////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

class MyClass {         // The class
    public:               // Access specifier
        void myMethod() {   // Method/function
            cout << "Hello World!" << endl;
        }
};

int main() {
    MyClass myObj;     // Create an object of MyClass
    
    myObj.myMethod();  // Call the method

    askOS();
    return 0;
}

/*
Output:

Hello World!
*/