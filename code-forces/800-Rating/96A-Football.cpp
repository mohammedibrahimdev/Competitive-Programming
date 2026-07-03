/*
Problem: Codeforces 96A - Football

Topic:
- Implementation
- Strings

Approach:
- Traverse the string while counting consecutive '0's and '1's.
- Reset the opposite counter whenever the character changes.
- If either count reaches 7, print "YES"; otherwise, print "NO".

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int ones = 0, zeros = 0;
    string arr;
    cin >> arr;

    bool yes = true;
    for(char ch :arr)
    {
        if(ch == '0') 
        {
            ones = 0;
            zeros++;
        }
        else if(ch == '1')
        {
            zeros = 0;
            ones++;
        }
        
        if(ones >= 7 || zeros  >= 7){
            cout << "YES" << endl;
            yes = false;
            break;
        }
    }

    if(yes) cout << "NO" << endl;
        

    return 0;
}
