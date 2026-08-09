/*
Problem: 1901A - Line Trip
Platform: Codeforces
Rating: 800

Topic:
- Greedy
- Arrays

Pattern:
- Maximum Gap

Important:
- Teaches finding the largest distance between consecutive positions.

Approach:
- The first gap is from 0 to the first gas station.
- Check every gap between consecutive gas stations.
- For the final station, the bus must travel to x and return, so multiply the final gap by 2.
- Take the maximum required distance.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = a[0];

        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[i - 1]);
        }

        ans = max(ans, 2 * (x - a[n - 1]));

        cout << ans << '\n';
    }

    return 0;
}