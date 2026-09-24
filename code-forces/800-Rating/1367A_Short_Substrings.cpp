/*
Problem      : A. Short Substrings
Platform     : Codeforces
Problem ID   : 1367A
Rating       : 800

Topic        : Math, Implementation

Pattern      : String Traversal

Important    : Teaches extracting characters at alternate positions while handling the last character separately.

Approach     :
- Traverse the string from left to right.
- Add every second character to `ans`.
- If the last character is left out, add it separately.
- Print the resulting string.

Time Complexity  : O(n)
Space Complexity : O(n)
*/

#include<iostream>
using namespace std;
int main ()
{
    int test;
    cin >> test;

    while(test--){

        string arr;
        cin >> arr;

        string ans;
        for(int i = 0;i<arr.size();++i){
            ans.push_back(arr[i]);
            i++;
            if(i == arr.size() - 1){
                ans.push_back(arr[i]);
                break;
            }
        }

        cout << ans << endl;

    }

    return 0;
}