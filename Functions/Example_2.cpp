//Call a function multiple times

#include <iostream>
#include "../myFunctions.h"
using namespace std;

void myFunction() {
    cout << "I just got executed!\n";
}

int main() {
    myFunction();
    myFunction();
    myFunction();

    askOS();
    return 0;
}