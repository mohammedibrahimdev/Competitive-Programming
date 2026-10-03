#include <iostream>
#include <string>
using namespace std;

int main() {

    string a, b;

    while (cin >> a >> b) {

        swap(a[0] , b[0]);

        cout << a << " " << b << endl;
    }

    return 0;
}