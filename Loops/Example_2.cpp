///////////////////
// Do while loop //
///////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int i = 0;

    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

    askOS();
    return 0;
}

/*
Output:

0
1
2
3
4
*/