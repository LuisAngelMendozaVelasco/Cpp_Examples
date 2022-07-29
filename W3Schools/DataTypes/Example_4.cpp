//Create a double type

#include <iostream>
#include "../myFunctions.h"
using namespace std;
 
int main () {
    double myNum = 19.99;

    cout << myNum << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    askOS();
    return 0;
}
