///////////////////////////////////
// Public and private specifiers //
///////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

class MyClass {
    public:     // Public access specifier
        int x;  // Public attribute
    private:    // Private access specifier
        int y;  // Private attribute
};

int main() {
    MyClass myObj;

    myObj.x = 25;   // Allowed (x is public)
    //myObj.y = 50; // Not allowed (y is private)

    cout << myObj.x << endl;

    askOS();
    return 0;
}

/*
Output:

25
*/