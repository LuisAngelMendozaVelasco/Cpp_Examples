///////////////////////////////////////////
// Create a simple "Hello World" program //
///////////////////////////////////////////

#include <iostream> // It is a header file library that lets us work with input and output objects, such as cout. Header files add functionality to C++ programs.
#include "../myFunctions.h" 
using namespace std; // Using namespace std means that we can use names for objects and variables from the standard library.

// Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside its curly brackets {} will be executed.
int main() { 
    /*
    cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World!".
    Every C++ statement ends with a semicolon ;.
    */
    cout << "Hello World!" << endl;

    askOS();
    return 0; // It ends the main function.
}

/*
Output:

Hello World!
*/