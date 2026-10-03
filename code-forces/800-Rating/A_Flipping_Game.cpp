#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ones = 0;
    int current = 0;
    int best = -1;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            ones++;
            x = -1;
        } else {
            x = 1;
        }

        current = max(x, current + x);
        best = max(best, current);
    }

    cout << ones + best << '\n';

    return 0;
}