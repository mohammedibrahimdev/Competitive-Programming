/*
Problem: Codeforces 41A - Translation

Topic:
- Strings
- Implementation

Pattern:
- String Manipulation

Approach:
- Reverse the first string.
- Compare the reversed string with the second string.
- If both are equal, print "YES"; otherwise, print "NO".

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    string s, t;
    cin >> s >> t;


    reverse(s.begin(), s.end());

    if(s == t) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
    
}