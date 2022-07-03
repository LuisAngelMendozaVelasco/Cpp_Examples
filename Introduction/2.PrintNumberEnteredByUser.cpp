//This program asks the user to enter a number.
//When the user enters an integer, it is stored in variable number

#include <iostream>
using namespace std; //This will allow us to write cout, cin, endl, etc. instead of std::cout, std::cin, std::endl respectively.

void askOS() {
    #ifdef _WIN32 //Ask for the OS
        system("pause");
    #endif
}

int main() {    
    int number; //Int variable

    cout << "Enter an integer: ";
    cin >> number;
    cout << "You entered " << number << "!" << endl; 

    askOS();   
    return 0;
}