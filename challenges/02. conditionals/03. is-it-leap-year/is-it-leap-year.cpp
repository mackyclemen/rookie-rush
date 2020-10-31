#include<iostream>
using namespace std;

int main() {
    
    // Create the program that determines if the given year 
    // is a leap year or not.
    // Input: year (int)
    // Output: "Leap Year" or "Not Leap Year"
    // Constraints: don't worry about input validation
    //              only positve numbers

    int year;

    // i'm limiting myself to a somewhat "new"
    // programmer

    cin >> year;

    if(year % 100 == 0) {
        if(year % 400 == 0) {
            cout << "Leap Year";
        } else {
            cout << "Not Leap Year";
        }
    } else if(year % 4 == 0) {
        cout << "Leap Year";
    } else {
        cout << "Not Leap Year";
    }

    return 0;
}