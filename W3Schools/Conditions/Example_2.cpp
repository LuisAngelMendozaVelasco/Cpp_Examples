//The else statement

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int time = 20;

    if(time < 18) {
        cout << "Good day." << endl;
    } 
    else {
        cout << "Good evening." << endl;
    }

    askOS();
    return 0;
}