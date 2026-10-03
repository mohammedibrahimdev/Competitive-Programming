#include <iostream>
#include <string>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        string arr;

        int rows = 3;

        while (rows--) {
            string rows_string;
            cin >> rows_string;

            if (rows_string[0] == '?' ||
                rows_string[1] == '?' ||
                rows_string[2] == '?') {

                arr = rows_string;
                break;
            }
        }

        if (arr[0] == '?') {
            if (arr[1] == 'A' && arr[2] == 'B') {
                cout << 'C' << endl;
            }
            else if (arr[1] == 'B' && arr[2] == 'C') {
                cout << 'A' << endl;
            }
            else {
                cout << 'B' << endl;
            }
        }
        else if (arr[1] == '?') {
            if (arr[0] == 'A' && arr[2] == 'C') {
                cout << 'B' << endl;
            }
            else if (arr[0] == 'B' && arr[2] == 'A') {
                cout << 'C' << endl;
            }
            else {
                cout << 'A' << endl;
            }
        }
        else {
            if (arr[0] == 'A' && arr[1] == 'B') {
                cout << 'C' << endl;
            }
            else if (arr[0] == 'B' && arr[1] == 'C') {
                cout << 'A' << endl;
            }
            else {
                cout << 'B' << endl;
            }
        }
    }

    return 0;
}