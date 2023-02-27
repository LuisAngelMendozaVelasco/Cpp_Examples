//String concatenation

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;
 
int main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;

    cout << fullName << endl;

    askOS();
    return 0;
}