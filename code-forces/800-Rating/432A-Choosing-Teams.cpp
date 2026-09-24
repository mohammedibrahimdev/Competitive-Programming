/*
Problem      : A. Choosing Teams
Platform     : Codeforces
Problem ID   : 432A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Counting + Minimum Grouping

Important    : Teaches filtering elements by a condition and grouping valid elements into fixed-size teams.

Approach     :
- Check each student's participation count.
- A student is eligible if `number + k <= 5`.
- Count all eligible students.
- Every team needs exactly 3 eligible students.
- Therefore, the number of teams is `eligible / 3`.

Time Complexity  : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int eligible = 0;

    for (int i = 0; i < n; ++i) {

        int number;
        cin >> number;

        if (number + k <= 5) {
            eligible++;
        }
    }

    cout << eligible / 3 << endl;

    return 0;
}