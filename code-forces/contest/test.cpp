#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, x, s;
        cin >> n >> x >> s;

        string u;
        cin >> u;

        vector<int> dp(x + 1, -1);
        dp[x] = 0;

        for (char eia : u) {
            vector<int> ndp = dp;

            for (int e = 0; e <= x; e++) {
                if (dp[e] == -1) continue;

                int seated = dp[e];
                long long r = 1LL * (x - e) * s - seated;

                if (eia == 'I') {
                    if (e > 0) {
                        ndp[e - 1] = max(ndp[e - 1], seated + 1);
                    }
                }
                else if (eia == 'E') {
                    if (r > 0) {
                        ndp[e] = max(ndp[e], seated + 1);
                    }
                }
                else { // 'A'
                    if (e > 0) {
                        ndp[e - 1] = max(ndp[e - 1], seated + 1);
                    }
                    if (r > 0) {
                        ndp[e] = max(ndp[e], seated + 1);
                    }
                }
            }

            dp.swap(ndp);
        }

        int ans = 0;
        for (int v : dp) ans = max(ans, v);

        cout << ans << '\n';
    }

    return 0;
}