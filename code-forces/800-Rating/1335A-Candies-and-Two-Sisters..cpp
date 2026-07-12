/*
Problem: 1335A - Candies and Two Sisters
Platform: Codeforces
Rating: 900

Topic:
- Math
- Implementation

Pattern:
- Mathematical Observation

Approach:
- Read the number of candies for each test case.
- If n is less than or equal to 2, it is impossible to split the candies into
  two positive unequal parts, so print 0.
- Otherwise, the number of valid distributions is (n - 1) / 2.
- Print the result.

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long  int  n;
        cin  >> n;

        if( n <= 2){cout << "0" << endl;}
        else
        cout << (n - 1)/2 << endl;
    }

    return 0;
}
