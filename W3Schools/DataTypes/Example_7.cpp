//Create a string type

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string greeting = "Hello";

    cout << greeting << endl;
    cout << "Size of string: " << sizeof(string) << " bytes" << endl;

    askOS();
    return 0;
}