/*
Problem: 61A - Ultra-Fast Mathematician
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Strings

Pattern:
- Bit Manipulation (XOR Simulation)

Approach:
- Read the two binary strings.
- Compare corresponding characters.
- If the characters are different, append '1' to the answer.
- Otherwise, append '0'.
- Print the resulting binary string.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    string arr1, arr2;
    cin >> arr1;
    cin >> arr2;
    string ans;
    int i = 0, j = 0;
    for(;i<arr1.size();++i, ++j)
    {
        if(arr1[i] != arr2[i])
        ans += '1';
        else
        ans += '0';
    }

    for(char ch : ans)
    cout << ch;

    return 0;

}