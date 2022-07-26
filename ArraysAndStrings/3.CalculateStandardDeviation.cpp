//This program calculates the standard deviation of an individual series using arrays. 

#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

float calculateSD(float data[]);

int main() {
    int i;
    float data[10];

    cout << "Enter 10 elements!" << endl;

    for(i = 0; i < 10; ++i) {
        cout << i + 1 << ". ";
        cin >> data[i];
    }

    cout << "\nStandard Deviation = " << calculateSD(data) << endl;

    askOS();
    return 0;
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;

    for(i = 0; i < 10; ++i) {
        sum += data[i];
    }

    mean = sum / 10;

    for(i = 0; i < 10; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / 10);
}