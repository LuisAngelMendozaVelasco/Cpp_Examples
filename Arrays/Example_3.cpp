//Loop through an array

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    for(int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }

    askOS();
    return 0;
}
