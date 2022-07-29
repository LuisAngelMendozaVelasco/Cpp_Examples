#include <iostream> //The #include is a preprocessor directive used to include files in our program.
#include "../myFunctions.h"

int main() { //A valid C++ program must have the main() function. The execution of code beings from this function.
    std::cout << "Hello World!" << std::endl; //std::cout prints the content inside the quotation marks.

    askOS();
    return 0; //The return 0; statement is the "Exit status" of the program.
}