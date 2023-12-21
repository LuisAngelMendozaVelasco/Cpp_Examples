//////////////////////////////////////
// Add parameters to a class method //
//////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    Car myObj;

    cout << myObj.speed(200) << endl;

    askOS();
    return 0;
}

/*
Output:

200
*/