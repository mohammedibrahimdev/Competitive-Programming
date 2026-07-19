/*
Problem: 630A - Again Twenty Five!
Platform: Codeforces
Rating: 800

Topic:
- Math

Pattern:
- Mathematical Observation

Important:
- Not every problem requires computation; sometimes the answer is a fixed pattern.

Approach:
- Observe that the last two digits of 5ⁿ are always 25.
- Therefore, simply print 25.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    long long int n;
    cin >> n;

    cout << 25 << endl;
    return 0;
}