#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    
    // Create a program that divides the tip amount
    // to a number of persons in the table.
    //
    // input: total cost (float)
    //        tip percentage (float)
    //        number of people in table (int)
    // output: total price
    //         tip amount
    //         divided tip
    // constraint: two decimal points
    // hint: use iomanip library

    float cost, tipPercent;
    int numberOfPeople;

    float tip, tipDivided, totalCost;

    cin >> cost;
    cin >> tipPercent;
    cin >> numberOfPeople;

    tip = cost * (tipPercent / 100);
    totalCost = cost + tip;
    tipDivided = tip / numberOfPeople;

    cout << fixed << setprecision(2) << totalCost << endl << tip << endl << tipDivided;

    return 0;

}