/*
Problem: Codeforces 112A - Petya and Strings

Approach:
- Read the two strings.
- Convert both strings to lowercase.
- Compare them character by character.
- If the first different character in the first string is smaller,
  print -1.
- If it is greater, print 1.
- If all characters are equal, print 0.

Key Idea:
- Ignore letter case by converting both strings to lowercase before
  comparing.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    for (int i = 0; i < first.size(); i++)
    {
        first[i] = tolower(first[i]);
        second[i] = tolower(second[i]);
    }

    if (first < second)
        cout << -1 << endl;
    else if (first > second)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}