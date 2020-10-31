#include<iostream>
using namespace std;

int main() {
    
    // Create a program that will ask the user three
    // integers and will return the largest of the three.

    int a, b, c, max;

    cin >> a;
    cin >> b;

    if (a<b) {
        max = b;
    } else {
        max = a;
    }

    cin >> c;

    if(max < c) {
        max = c;
    }

    cout << max;

    return 0;
}