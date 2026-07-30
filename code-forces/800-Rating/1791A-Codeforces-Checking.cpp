
/*
Problem: 1791A - Codeforces Checking
Platform: Codeforces
Rating: 800

Topic:
- Strings
- Implementation

Approach:
- Store the string "codeforces".
- For each query, check whether the given character exists in the string using find().
- If found, print "YES"; otherwise, print "NO".

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    string target = "codeforces";
    while(n--)
    {
        char ch;
        cin >> ch;

        if(target.find(ch) != string::npos){cout  << "YES" << endl;}
        else cout << "NO" << endl;
    }

    return 0;
}