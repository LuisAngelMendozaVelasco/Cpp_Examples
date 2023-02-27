//Identifiers

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    // Good name
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;

    cout << minutesPerHour << "\n";
    cout << m << endl;

    askOS();
    return 0;
}