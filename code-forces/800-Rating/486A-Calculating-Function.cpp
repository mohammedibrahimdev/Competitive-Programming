/*
Problem: 486A - Calculating Function
Platform: Codeforces
Rating: 800

Topic:
- Math
- Implementation

Pattern:
- Mathematical Observation

Approach:
- Check whether n is even or odd.
- If n is even, the result is n / 2.
- If n is odd, the result is -(n + 1) / 2.
- Print the computed value.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    long long int n, fn =0 ;
    cin >> n;
    
    if(n%2 ==0) fn = n/2;
    else fn = -(n + 1)/2;

    cout << fn << endl;

    return 0;
}