/*
Problem: 1328A - Divisibility Problem
Platform: Codeforces
Rating: 800

Topic:
- Math
- Implementation

Pattern:
- Mathematical Observation

Approach:
- If a is already divisible by b, print 0.
- Otherwise, print the difference between b and the remainder (a % b).
- This gives the minimum value to add to make a divisible by b.

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a % b == 0)
            cout << 0 << endl;
        else
            cout << b - (a % b) << endl;
    }

    return 0;
}