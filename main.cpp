#include <iostream>
using namespace std; // do not do this in normal development, bad practice


int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x , y, z;

        /*
        use if you want to take in any number of values in one line

        while (cin >> x) {
            //do something with x
        }
        */

        cout << x << y << z << endl;
    }

    return 0;
}