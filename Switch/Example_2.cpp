//The switch statement with a default keyword

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int day = 4;

    switch(day) {
    case 6:
        cout << "Today is Saturday" << endl;
        break;
    case 7:
        cout << "Today is Sunday" << endl;
        break;
    default:
        cout << "Looking forward to the Weekend" << endl;
    }

    askOS();
    return 0;
}