/*
Problem: 520A - Pangram
Platform: Codeforces
Rating: 800

Topic:
- Strings
- Implementation

Pattern:
- Character Frequency

Approach:
- If the string length is less than 26, it cannot be a pangram.
- Convert all characters to uppercase for case-insensitive comparison.
- Check whether every letter from 'A' to 'Z' appears at least once.
- If any letter is missing, print "NO"; otherwise, print "YES".

Time Complexity: O(26 × n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, i , j;
    cin >> n;

    string arr;
    cin >> arr;

    if(n < 26){
        cout << "NO" << endl;
        return 0;
    }

    for(char &ch : arr)
    {
        ch = toupper(ch);        
    }

    bool found = false;

    for(int i = 65;i<=(65 + 25);++i)
    {
        found = false;
        for(int j = 0;j<n;++j)
        {
            if(arr[j] == char(i)){
            found = true;
            break;
            }
        }

        if(!found) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}