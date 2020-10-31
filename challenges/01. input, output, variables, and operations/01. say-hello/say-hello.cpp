#include<iostream>
using namespace std;

int main() {
    
    // Say hello to your friend using this 
    // program! Create a program that accepts
    // a user's whole name and greet him a simple
    // "Hello"!
    //
    // input: name (string)
    // output: "Hello " + name (string)
    // constraints: name can have a space, or can
    //              be very long
    // hint: use getline() from the iostream library

    string name;

    getline(cin, name);
    cout << "Hello " +  name;

    return 0;
    
}