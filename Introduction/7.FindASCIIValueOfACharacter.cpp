/*In this example, you will learn to find ASCII value of a character in C++.
A character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself in C programming. That value is known as ASCII value.
For example, ASCII value of 'A' is 65.
What this means is that, if you assign 'A' to a character variable, 65 is stored in that variable rather than 'A' itself.*/

#include <iostream>
using namespace std;

void askOS() {
    #ifdef _WIN32 //Ask for the OS
        system("pause");
    #endif
}

int main() {
    char c;

    cout << "Enter a character: ";
    cin >> c;
    cout << "\nASCII Value of \"" << c << "\" is " << int(c) << endl;

    askOS();
    return 0;
}