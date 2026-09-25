/*
Problem      : A. Black Square
Platform     : Codeforces
Problem ID   : 431A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Array Mapping + String Traversal

Important    : Teaches mapping each character to a corresponding array value.

Approach     :
- Store the calories of the four strip types in an array.
- Convert each character (`1` to `4`) into an array index.
- Add the corresponding calorie value for every character in the string.
- Print the total calories.

Time Complexity  : O(n)
Space Complexity : O(1)
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    int a[4];

    string s;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cin >> s;

    int ans = 0;

    for(char ch : s){
        ans += a[(ch - '0') - 1];
    }

    cout << ans << endl;

    return 0;

}