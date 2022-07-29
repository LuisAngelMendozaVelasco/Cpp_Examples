//Create a char type

#include <iostream>
#include "../myFunctions.h"
using namespace std;
 
int main () {
    char myGrade = 'B';

    cout << myGrade << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    askOS();
    return 0;
}