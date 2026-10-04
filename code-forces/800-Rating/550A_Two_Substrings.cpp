/*
Problem      : Two Substrings
Platform     : Codeforces
Problem ID   : 550A
Rating       : 1200

Topic        : Strings

Pattern      : String Traversal + Non-overlapping Substrings

Important    : Find "AB" and "BA" and ensure their starting indices differ by at least 2.

Approach     :
- Find the first occurrence of "AB".
- Find the first occurrence of "BA".
- Check that both exist and do not overlap.
- Print YES if valid, otherwise NO.

Time Complexity  : O(n)
Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ab = -1, ba = -1;

    // Find AB
    for (int i = 0; i + 1 < s.size(); ++i) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            ab = i;
            break;
        }
    }

    // Find BA
    for (int i = 0; i + 1 < s.size(); ++i) {
        if (s[i] == 'B' && s[i + 1] == 'A') {
            ba = i;
            break;
        }
    }

    if (ab != -1 && ba != -1 && abs(ab - ba) >= 2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}