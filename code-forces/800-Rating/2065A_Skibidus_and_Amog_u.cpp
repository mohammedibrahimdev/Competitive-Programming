/*
Problem      : A. Skibidus and Amog'u
Platform     : Codeforces
Problem ID   : 2065A
Rating       : 800

Topic        : Strings, Implementation

Pattern      : String Manipulation

Important    : Teaches modifying strings based on a specific suffix.

Approach     :
- If the string is exactly `"us"`, replace it with `"i"`.
- Otherwise, remove the last two characters `"us"`.
- Append `"i"` to the remaining string.
- Print the modified string.

Time Complexity  : O(n)
Space Complexity : O(n)
*/

#include<iostream>
using namespace std;
int main ()
{
    int testcase;
    cin >> testcase;

    while(testcase--){
        string arr;
        cin >> arr;

        if(arr == "us"){
            cout << 'i' << endl;
        }
        else{
            arr.pop_back();
            arr.pop_back();
            arr += 'i';

            cout << arr << endl;
        }
    }

    return 0;
}