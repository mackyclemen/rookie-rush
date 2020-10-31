#include<iostream>
using namespace std;

// Jake wrote a program that asks for his
// friend's name and age, and the program will
// greet his friend. He has a general idea
// of the code, but Jake said that the code
// won't run. Can you help him fix his code?

int main() {

    string name;
    int age;

    cout << "Hello, What's your name? ";
    cin >> name;
    cout << "Hello, " << name << "! How old are you? ";
    cin >> age;

    if(age > 0 && age < 5) {
        cout << "Aren't you too young to use the computer, " << name << "?";
    } else if (age >= 5 && age < 12) {
        cout << "Hey " << name << "! I hope you have a fun day ahead!";
    } else if (age >= 12 && age < 18) {
        cout << "Feeling that you're growing up fast already, " << name << "?";
    } else if (age >= 18 && age < 50) {
        cout << "You've probably embraced your adulthood, " << name << "! Have a nice day!" << endl;
    } else {
        cout << "May you have a peaceful day, " << name << "!";
    }

    return 0;
}