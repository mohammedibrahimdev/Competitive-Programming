/*
Problem: 1742A - Sum
Platform: Codeforces
Rating: 800

Topic:
- Math
- Implementation

Pattern:
- Mathematical Observation

Approach:
- For each test case, read the three integers.
- Check whether any one of the numbers is equal to the sum of the other two.
- If such a condition is true, print "YES"; otherwise, print "NO".

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a , b , c;
        cin >> a >> b >> c;

        if(a == (b + c)){cout << "YES" << endl;}
        else if(b == (a + c)){cout << "YES" << endl;}
        else if(c == (a + b)){cout << "YES" << endl;}
        else cout << "NO" << endl;
    }

    return 0;
    
}