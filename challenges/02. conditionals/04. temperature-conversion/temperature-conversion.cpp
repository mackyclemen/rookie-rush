#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    // Create a program that converts
    // temperature from celsius to faren,
    // and vice versa.
    //
    // Input:  value unit
    // Output: value unit
    // note: value is a floating point var
    // 
    //       value output should be at least 2 decimal points
    //       hint: use the iomanip library
    // 
    //       unit is a char, either 'c' or 'f' lowercase
    
    char unit, uans;
    float temp, ans;

    cin >> temp >> unit;

    switch (unit) {
        case 'f':
            ans  = (5 * (temp - 32)) / 9;
            uans = 'c';
            break;

        case 'c':
            ans  = (32 + (temp * 9)) / 5;
            uans = 'f';
            break;
    }

    cout << fixed << setprecision(2) << ans << " " << uans << endl;

    return 0;
}