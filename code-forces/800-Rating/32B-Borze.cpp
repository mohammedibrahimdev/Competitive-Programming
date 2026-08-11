/*
Problem: 32B - Borze
Platform: Codeforces
Rating: 800

Topic:
- Strings
- Implementation

Pattern:
- Pattern Matching
- String Traversal

Approach:
- Traverse the encoded string from left to right.
- If the current pattern is ".": add '0'.
- If the pattern is "-.": add '1'.
- If the pattern is "--": add '2'.
- Skip the second character when a two-character pattern is processed.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<iostream>
using namespace std;

int main ()
{
    string arr;
    cin >> arr;

    string ans;

    for(int i = 0;i<arr.size();++i){

        if(arr[i] == '-' && arr[i + 1] == '.'){
        ans += '1';
            i++;
        }
        else if(arr[i] == '-' && arr[i + 1] == '-'){
        ans += '2';
            i++;
        }
        else if(arr[i] == '.')
        ans += '0';
    }

    cout << ans << endl;
    return 0;
}