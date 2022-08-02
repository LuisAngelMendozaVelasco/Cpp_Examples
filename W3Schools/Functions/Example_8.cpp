//Return the sum of two parameters

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int myFunction(int x, int y) {
    return x + y;
}

int main() {
    cout << myFunction(5, 3) << endl;

    askOS();
    return 0;
}