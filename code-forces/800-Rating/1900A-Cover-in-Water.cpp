/*
Problem      : A. Cover in Water
Platform     : Codeforces
Problem ID   : 1900A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Consecutive Elements

Important    : Teaches detecting a special consecutive pattern and handling it separately.

Approach     :
- Count the number of `.` cells.
- Check whether there are three consecutive `.` cells.
- If three consecutive dots exist, the answer is `2`.
- Otherwise, the answer is the total number of dots.

Time Complexity  : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int dots = 0;
        bool threeDots = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
                dots++;

            if (i >= 2 && s[i] == '.' && s[i - 1] == '.' && s[i - 2] == '.')
                threeDots = true;
        }

        if (threeDots)
            cout << 2 << '\n';
        else
            cout << dots << '\n';
    }

    return 0;
}