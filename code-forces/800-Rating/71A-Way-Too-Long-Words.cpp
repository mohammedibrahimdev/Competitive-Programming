/*
Problem: 71A - Way Too Long Words
Platform: Codeforces
Rating: 800
Topic: Strings, Implementation

Approach:
- Read each word.
- If its length is greater than 10:
  - Keep the first character.
  - Replace the middle characters with their count.
  - Keep the last character.
- Otherwise, print the word unchanged.

Time Complexity: O(L)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

string waytoolongwords(string arr)
{
    if((arr.size()) > 10){
        return string( 1,arr[0]) + to_string((arr.size()) - 2) + string(1,arr[(arr.size()) - 1]);
    }
    else return arr;
}

int main ()
{
    int n;
    cin >> n;
    for(int i = 0;i<n;++i){
        string arr;
        cin >> arr;
        cout << waytoolongwords(arr) << endl;
    }
    return 0;

}