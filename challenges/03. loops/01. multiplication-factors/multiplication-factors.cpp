#include<iostream>
using namespace std;

int main() {
    
    // Create a program that accepts a number
    // then prints the factor of the given number
    // from 1 to 20 in the form "x * y = z"
    // input: number (int)
    // output: 20 lines from x*1 to x*20

    int number;

    cin >> number;

    for(int i = 1; i <= 20; ++i) {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}