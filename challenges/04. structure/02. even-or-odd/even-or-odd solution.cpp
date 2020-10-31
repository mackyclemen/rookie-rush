#include<iostream>
using namespace std;

// Sean wants to enumerate numbers 1 to 100
// and print if the number is either even 
// or odd. He has put the code already, but
// Sean says that he can't run the program.
// Can you help him fix his code?

int main() {
    
    int i = 1;

    while(i < 100) { // <- incorrect condition; it'll stop on 99

        // solution note: one can omit brackets on the if statements and it still
        // should run; there's only one line of code for each condition anyway.

        if(i % 2 == 0) { // <- incorrect token; should be a comparison (double equals ==)
            cout << i << " is even";
        } else { // <- missing closing curly brackets
            cout << i << " is odd";
        }

        cout << endl; // <- missing semicolon

        // solution note:
        // this could be shortened as ++i / i++. if they've changed this, it's
        // fine as well, as it's functionally the same.
        i = i + 1;
    }

    return 0;
} // <- missing end bracket