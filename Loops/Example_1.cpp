////////////////
// While loop //
////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int i = 0;

    while(i < 5) {
        cout << i << "\n";
        i++;
    }

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