/*
Problem: 4A - Watermelon
Platform: Codeforces
Rating: 800
Topic: Math

Approach:
- The watermelon weight must be even.
- It must be possible to split it into two positive even parts.
- This is possible iff n > 2 and n is even.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n > 2 && n % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}