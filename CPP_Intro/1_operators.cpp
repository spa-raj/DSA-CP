#include <iostream>
using namespace std;

int main() {
    int f;
    cout << "Enter Fahrenheit temperature:" << endl;
    cin >> f;
    float c =  (5.0f*(f - 32))/9;
    cout << "Temperature in Celsius: " << c << endl;

    cout << 100%12 << endl;

    int a,b;
    cout << "Enter value of a and b: " << endl;
    cin >> a >> b;

    cout << "Value of a and b: " << a << "," << b << endl;
    if (a>b) {
        cout << "Value of a greater than b" << endl;
    }
    else if (a<b) {
        cout << "Value of a less than b" << endl;
    }
    else {
        cout << "Value of a is equal to b" << endl;
    }
    bool isGreaterThanEqualTo = (a>=b);
    cout << isGreaterThanEqualTo << endl;
}