#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<long long, int> freq;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            freq[x]++;
        }

        int less = 0;
        int ans = n;

        for (auto &p : freq) {
            int equal = p.second;
            int greater = n - less - equal;

            ans = min(ans, max(less, greater));

            less += equal;
        }

        cout << ans << '\n';
    }

    return 0;
}