//Continue a loop

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    for(int i = 0; i < 10; i++) {
        if(i == 4) {
            continue;
        }
        cout << i << "\n";
    }   

    askOS();
    return 0;
}
