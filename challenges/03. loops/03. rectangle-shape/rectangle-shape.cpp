#include<iostream>
using namespace std;

int main() {
    
    // Create a program that will accept two numbers
    // that will become the width and height of a
    // rectangle. Then, print a rectangle of the
    // given width and height using the '*' (star)
    // character.

    int width, height;

    cin >> width >> height;

    for(int i = 1; i <= height; ++i) {
        for(int j = 1; j <= width; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;

}