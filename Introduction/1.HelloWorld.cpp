#include <iostream> //The #include is a preprocessor directive used to include files in our program.

int main() { //A valid C++ program must have the main() function. The execution of code beings from this function.
    std::cout << "Hello World!" << std::endl; //std::cout prints the content inside the quotation marks.
    
    #ifdef __linux__ //Ask for the OS
    std::cout << "You have Linux Operating System!" << std::endl;
    #elif _WIN32
    std::cout << "You have Windows Operating System!" << std::endl;
    #endif
    
    return 0; //The return 0; statement is the "Exit status" of the program.
}