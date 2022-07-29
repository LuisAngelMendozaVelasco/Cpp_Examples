//Create an int type

#include <iostream>
#include "../myFunctions.h"
using namespace std;
 
int main () {
    int myNum = 1000;

    cout << myNum << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;

    askOS();
    return 0;
}
