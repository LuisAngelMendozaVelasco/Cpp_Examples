//Pass by reference

#include <iostream>
#include "../myFunctions.h"
using namespace std;

void swapNums(int &x, int &y) {
    int z = x;

    x = y;
    y = z;
}

int main() {
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << "\n" << secondNum << "\n";

    swapNums(firstNum, secondNum);

    cout << "\nAfter swap: " << "\n";
    cout << firstNum << "\n" << secondNum << "\n";

    askOS();
    return 0;
}