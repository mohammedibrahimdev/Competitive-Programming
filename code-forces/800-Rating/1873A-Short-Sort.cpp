/*
Problem      : A. Short Sort
Platform     : Codeforces
Problem ID   : 1873A
Rating       : 800

Topic        : Math, Implementation

Pattern      : String Comparison

Important    : Teaches checking whether a string can become the target using at most one swap.

Approach     :
- Compare the given string with `"abc"`.
- Count the positions that are different.
- If `different` is `0` or `2`, print `"YES"`.
- Otherwise, print `"NO"`.

Time Complexity  : O(1) per test case
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int different = 0;
 
        for (int i = 0; i < 3; i++) {
            if (s[i] != "abc"[i])
                different++;
        }
 
        if (different == 0 || different == 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}