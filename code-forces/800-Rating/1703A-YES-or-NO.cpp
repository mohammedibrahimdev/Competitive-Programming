/*
Problem: 1703A - YES or YES?
Platform: Codeforces
Rating: 800

Topic:
- Strings
- Implementation

Pattern:
- Case Normalization

Approach:
- Convert the given string to lowercase.
- Compare it with "yes".
- If both strings are equal, print "YES"; otherwise, print "NO".

Time Complexity: O(n) per test case
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    while(n--){
    string arr, targest = "yes";
    cin >> arr;

    for(char &ch : arr)
    ch = tolower(ch);

    if(arr[0] == targest[0] && arr[1] == targest[1] && arr[2] == targest[2])
    cout << "YES" << endl;
    else cout << "NO" << endl;
    }

    return 0;
}