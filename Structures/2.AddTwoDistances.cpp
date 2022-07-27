//This program takes two distances (in inch-feet system), adds them and displays the result on the screen.

#include <iostream>
#include "../myFunctions.h"
using namespace std;

struct Distance {
    int feet;
    float inch;
} d1 , d2, sum;

int main() {
    cout << "Enter 1st distance!" << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inches: ";
    cin >> d1.inch;

    cout << "\nEnter 2nd distance!" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inches: ";
    cin >> d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    //Changing to feet if inch is greater than 12
    if(sum.inch > 12) {
        //Extra feet
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout << "\nSum of distances = " << sum.feet << " feet, " << sum.inch << " inches" << endl;

    askOS();
    return 0;
}