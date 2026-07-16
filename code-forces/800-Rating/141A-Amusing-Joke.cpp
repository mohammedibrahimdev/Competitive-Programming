/*
Problem: 141A - Amusing Joke
Platform: Codeforces
Rating: 800

Topic:
- Strings
- Sorting

Pattern:
- Sorting

Approach:
- Read the guest name, host name, and the pile of letters.
- Concatenate the guest and host names.
- Sort the concatenated string and the pile of letters.
- If both sorted strings are identical, print "YES"; otherwise, print "NO".

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include<algorithm>
#include<iostream>
using namespace std;
int main ()
{
    string arr1, arr2, arr3;
    cin >> arr1;
    cin >> arr2;
    cin >> arr3;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    sort(arr3.begin(), arr3.end());

    string finalarr = arr1 + arr2;
    sort(finalarr.begin(), finalarr.end());

    int len1 = finalarr.size();
    int len2 = arr3.size();

    if(len1 != len2){cout << "NO" << endl; return 0;}

    bool yes = true;
    for(int i = 0;i<len1;++i)
    {
        if(finalarr[i] != arr3[i])
        {
            yes = false;
            cout << "NO" << endl;
            return 0;
        }
    }

    if(yes){cout <<  "YES" << endl;}

    return 0;
}