#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        for (int i = 0; i < 3; i++) {
            string s;
            cin >> s;

            if (s.find('?') != string::npos) {
                if (s.find('A') == string::npos)
                    cout << 'A' << '\n';
                else if (s.find('B') == string::npos)
                    cout << 'B' << '\n';
                else
                    cout << 'C' << '\n';
            }
        }
    }

    return 0;
}