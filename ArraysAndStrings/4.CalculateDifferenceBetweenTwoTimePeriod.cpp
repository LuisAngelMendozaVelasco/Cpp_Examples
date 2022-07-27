/*In this program, user is asked to enter two time periods and these two periods are stored in structure variables t1 and t2 respectively.
Then, the computeTimeDifference() function calculates the difference between the time periods and the result is displayed on the screen 
from the main() function without returning it (call by reference).

Call by value in C++
In call by value, original value is not modified.
Call by reference in C++
In call by reference, original value is modified because we pass reference (address).*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

struct TIME {
  int seconds;
  int minutes;
  int hours;
};

void computeTimeDifference(struct TIME, struct TIME, struct TIME *);

int main() {
    struct TIME t1, t2, difference;

    cout << "Enter start time!" << endl;
    cout << "Hours: ";
    cin >> t1.hours;
    cout << "Minutes: ";
    cin >> t1.minutes;
    cout << "Seconds: ";
    cin >> t1.seconds;

    cout << "\nEnter stop time!" << endl;
    cout << "Hours: ";
    cin >> t2.hours;
    cout << "Minutes: ";
    cin >> t2.minutes;
    cout << "Seconds: ";
    cin >> t2.seconds;

    computeTimeDifference(t1, t2, &difference); //Pass "difference" address

    cout << "\nTime difference: \n";
    cout << t1.hours << ":" << t1.minutes << ":" << t1.seconds << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    cout << " = " << difference.hours << ":" << difference.minutes << ":" << difference.seconds << endl;

    askOS();
    return 0;
}

void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference) {
    /*The Dot(.) operator is used to normally access members of a structure or union.
    The Arrow(->) operator exists to access the members of the structure or the unions using pointers.*/
    if(t2.seconds > t1.seconds) {
        --t1.minutes;
        t1.seconds += 60;
    }
    difference->seconds = t1.seconds - t2.seconds;
    
    if(t2.minutes > t1.minutes) {
        --t1.hours;
        t1.minutes += 60;
    }
    difference->minutes = t1.minutes - t2.minutes;

    difference->hours = t1.hours - t2.hours;
}