#include<iostream>
using namespace std;

int main() {
    
    // Create a program that will compute for
    // both the area and the circumference of
    // a circle.
    //
    // inputs: radius (float)
    // output: circle area, circle circumference
    //         (no units, each on a new line)
    // constraints: positive float numbers
    //              one decimal point
    //              uses constant pi: 3.14

    float radius;
    float area, circumference;

    cin >> radius;
    
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    cout << area << endl << circumference;

    return 0;
    
}