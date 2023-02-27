//Access Structure Members

#include <iostream>
#include "../myFunctions.h" 
using namespace std;

// Create a structure variable called myStructure
struct {
    int myNum;
    string myString;
} myStructure;

int main() {
    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    askOS();
    return 0;
}