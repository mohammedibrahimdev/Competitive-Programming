/*
Problem: 208A - Dubstep
Platform: Codeforces
Rating: 900

Topic:
- Strings
- Implementation

Pattern:
- String Parsing

Approach:
- Traverse the remix string from left to right.
- Whenever "WUB" is found, replace it with a single space.
- Ignore consecutive "WUB" sequences by avoiding multiple spaces.
- Append normal characters to the answer.
- Remove any trailing space and print the original song.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans;

    for (int i = 0; i < s.size();) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            if (!ans.empty() && ans.back() != ' ')
                ans += ' ';
            i += 3;
        } else {
            ans += s[i];
            i++;
        }
    }

    if (!ans.empty() && ans.back() == ' ')
        ans.pop_back();

    cout << ans;

    return 0;
}