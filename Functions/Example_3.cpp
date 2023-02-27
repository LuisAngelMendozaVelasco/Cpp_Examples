//Function declaration and definition

#include <iostream>
#include "../myFunctions.h"
using namespace std;

// Function declaration
void myFunction();

// The main method
int main() {
    myFunction();  // call the function

    askOS();
    return 0;
}

// Function definition
void myFunction() {
    cout << "I just got executed!" << endl;
}