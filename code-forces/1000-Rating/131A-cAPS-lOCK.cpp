/*
Problem: 131A - cAPS lOCK
Platform: Codeforces
Rating: 1000

Topic:
- Strings
- Implementation

Pattern:
- Case Conversion

Approach:
- Check if all characters except the first are uppercase.
- If the condition is true, toggle the case of every character.
- Otherwise, print the string unchanged.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool ok = true;

    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        for (char &ch : s)
        {
            if (isupper(ch))
                ch = tolower(ch);
            else
                ch = toupper(ch);
        }
    }

    cout << s << endl;

    return 0;
}