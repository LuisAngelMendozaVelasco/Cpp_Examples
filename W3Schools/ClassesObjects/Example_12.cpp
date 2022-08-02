//Multilevel inheritance

#include <iostream>
#include "../myFunctions.h"
using namespace std;

// Parent class
class MyClass {
    public: 
        void myFunction() {
            cout << "Some content in parent class." << endl;
        }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class 
class MyGrandChild: public MyChild {
};

int main() {
    MyGrandChild myObj;
    
    myObj.myFunction();

    askOS();
    return 0;
}