//This program declares 4 variables of type int, float, double and char. 
//Then, the size of each variable is evaluated using sizeof operator.

#include <iostream>
using namespace std;

void askOS() {
    #ifdef _WIN32 //Ask for the OS
        system("pause");
    #endif
}

int main() {    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    askOS();
    return 0;
}