#include<iostream>
using namespace std;

int main() {
    
    // Create a program that will recreate the
    // old kids division game FizzBuzz, where:
    // from 1 to 100, if a number is divisible
    // by 3, it will print "fizz", if it is
    // divisible by 5 it will print "buzz",
    // if it is divisible by both 3 and 5 it will
    // print "fizzbuzz", and if it is not, then
    // it'll print the number instead.

    for(int i = 1; i <= 100; ++i) {
        if(i % 3 == 0 && i % 5 == 0) {
            cout << "fizzbuzz";
        } else if(i % 3 == 0) {
            cout << "fizz";
        } else if(i % 5 == 0) {
            cout << "buzz";
        } else {
            cout << i;
        }

        cout << endl;
    } 

    return 0;
}