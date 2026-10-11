#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        string given, target;

        cin >> a >> b;
        cin >> given >> target;

        int min_steps = 0;

        while (given.find(target) == string::npos && min_steps < 6) {
            given += given;
            min_steps++;
        }

        if (given.find(target) != string::npos) {
            cout << min_steps << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}