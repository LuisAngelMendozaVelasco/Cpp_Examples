//////////////////////////
// Function overloading //
//////////////////////////

#include <iostream>
#include "../myFunctions.h" 
using namespace std;

//With function overloading, multiple functions can have the same name with different parameters
int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

int main() {
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);

    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << endl;

    askOS();
    return 0;
}

/*
Output:

Int: 13
Double: 10.56
*/