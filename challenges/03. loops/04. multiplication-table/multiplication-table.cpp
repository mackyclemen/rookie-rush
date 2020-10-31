#include<iostream>
using namespace std;

int main() {
    
    // Create a program that generates a multiplication table, given the
    // size of the table x*y, where x will be the multiplicands starting
    // from 0, and y will be the multiplicators starting from 0.
    // the table will print in this format: x*y=z.

    int x, y;

    cin >> x >> y;

    for(int i = 1; i <= y; ++i) {
        for(int j = 1; j <= x; ++j) {
            cout << j << "*" << i << "=" << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}