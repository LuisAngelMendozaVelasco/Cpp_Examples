/////////////////////////////
// Multidimensional arrays //
/////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    string letters[2][4] = {{"A", "B", "C", "D"},
                            {"E", "F", "G", "H"}};

    cout << letters[0][2] << endl;

    askOS();
    return 0;
}

/*
Output:

C
*/