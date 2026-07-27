
/*
Problem: 189A - Cut Ribbon
Platform: Codeforces
Rating: 1000

Topic:
- Brute Force
- Math

Pattern:
- Enumeration

Important:
- Teaches trying all possible combinations when the constraints are small.

Approach:
- Try every possible number of pieces of length a.
- For each choice, try every possible number of pieces of length b.
- Compute the remaining length.
- If the remaining length is divisible by c, update the maximum number of pieces.
- Print the maximum possible pieces.

Mistake / Learning:
- Initially looked for a direct mathematical solution.
- Learned that small constraints often allow brute-force enumeration efficiently.

Time Complexity: O((n/a) × (n/b))
Space Complexity: O(1)
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;

    for (int x = 0; x * a <= n; x++) {
        for (int y = 0; x * a + y * b <= n; y++) {
            int remaining = n - (x * a + y * b);

            if (remaining % c == 0) {
                int z = remaining / c;
                ans = max(ans, x + y + z);
            }
        }
    }

    cout << ans << endl;

    return 0;
}