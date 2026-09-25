/*
Problem      : B. Worms
Platform     : Codeforces
Problem ID   : 474B
Rating       : 1200

Topic        : Math, Implementation

Pattern      : Prefix Sum + Binary Search

Important    : Teaches converting range boundaries into prefix sums and using binary search to find the target position efficiently.

Approach     :
- Build a prefix sum array where each value represents the ending label of a pile.
- For each worm label, use `lower_bound()` to find the first prefix sum >= target.
- The index gives the pile containing that worm.

Time Complexity  : O(n + m log n)
Space Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prefix(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (i == 0)
            prefix[i] = x;
        else
            prefix[i] = prefix[i - 1] + x;
    }

    int m;
    cin >> m;

    while (m--) {
        int target;
        cin >> target;

        auto it = lower_bound(prefix.begin(), prefix.end(), target);

        cout << (it - prefix.begin()) + 1 << '\n';
    }

    return 0;
}