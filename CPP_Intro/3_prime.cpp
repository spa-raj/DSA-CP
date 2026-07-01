#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n" << endl;

    cin >> n;

    int i=2;
    bool isPrime = true;
    while (i*i<=n) {
        if (n%i==0) {
            cout << "Not Prime" << endl;
            isPrime = false;
            break;
        }
        i++;
    }
    if (isPrime) cout << "Prime" << endl;
    return 0;
}