/*
Problem: Codeforces 734A - Anton and Danik

Topic:
- Implementation
- Strings

Approach:
- Count Anton's ('A') and Danik's ('D') wins.
- Compare their counts to determine the winner.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, Anton = 0, Danik = 0;
    string arr;
    cin >> n >> arr;

    for(char ch : arr)
    {
        if(ch == 'A') Anton++;
        else Danik++;
    }

    if(Anton < Danik) cout << "Danik" << endl;
    else if(Anton > Danik) cout << "Anton" << endl;
    else cout << "Friendship" << endl;

    return 0;
}