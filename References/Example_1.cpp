/////////////////////////////////
// Create a reference variable //
/////////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    /*
    A reference variable is a "reference" to an existing variable, 
    and it is created with the & operator.
    */
    string food = "Pizza";
    string &meal = food;

    /*
    Now, we can use either the variable name food or the reference 
    name meal to refer to the food variable.
    */
    cout << food << "\n";
    cout << meal << "\n";

    askOS();
    return 0;
}

/*
Output:

Pizza
Pizza
*/