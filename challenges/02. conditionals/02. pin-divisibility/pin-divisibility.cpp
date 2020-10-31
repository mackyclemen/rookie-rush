#include<iostream>
using namespace std;

int main() {
    
    // Create a program that accepts two numbers
    // and a six-digit pin number, and returns the
    // word "true" if the pin number is divisible
    // by the first two numbers, or "false" if it is not.
    // input: d1, d2, pin (integers)
    // output: "true" or "false"
    // constraints: don't worry about input validation
    //              pin: 000000 to 999999 only

    int d1, d2, pin;

    cin >> d1 >> d2 >> pin;

    if(pin % d1 == 0 && pin % d2 == 0) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}