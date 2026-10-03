/*
Problem      : A. Maximum GCD
Platform     : Codeforces
Problem ID   : 1370A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Mathematical Observation

Important    : Teaches finding the answer directly through a mathematical observation instead of checking all pairs.

Approach     :
- The maximum possible GCD is `n / 2`.
- Choose `a = n / 2` and `b = n`.
- Therefore, gcd(a, b) = n / 2.
- Print `n / 2`.

Time Complexity  : O(1) per test case
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        cout << n / 2 << endl;
    }

    return 0;
}