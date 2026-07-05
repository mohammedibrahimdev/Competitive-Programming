/*
Problem: 58A - Chat room
Platform: Codeforces
Rating: 800

Topic:
- Strings
- Implementation

Pattern:
- Two Pointers
- Subsequence

Approach:
- Traverse the given string and the target string ("hello") simultaneously.
- If the current characters match, move both pointers.
- Otherwise, move only the pointer of the given string.
- If all characters of "hello" are matched, print "YES"; otherwise, print "NO".

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int  i = 0,j = 0;
    string given , target = "hello";
    cin >> given;

    while(i < given.size() && j < target.size())
    {
        if(given[i] == target[j])
        {
            i++;
            j++;
        }
        else  i++;
    }

    if(j == 5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}