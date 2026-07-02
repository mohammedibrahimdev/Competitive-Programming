/*
Problem: LeetCode 125 - Valid Palindrome

Approach:
- Read the input string.
- Ignore all non-alphanumeric characters.
- Convert all letters to lowercase.
- Store the processed characters in a new string.
- Compare characters from both ends of the processed string.
- If any pair of characters is different, the string is not a palindrome.
- If all pairs match, the string is a palindrome.

Key Idea:
- Normalize the string by removing unwanted characters and
  converting all letters to lowercase.
- Then perform a standard palindrome check.

Time Complexity: O(n)
Space Complexity: O(n)

Example:
Input:
"A man, a plan, a canal: Panama"

Processed String:
"amanaplanacanalpanama"

Output:
true
*/

#include<iostream>
using namespace std;

class solution {
public:
    bool ispalindrome(string s) {
        
        if(s.empty()) return true;
        string arr;
        for(char ch: s)
        {
            if(isalnum(ch))
            arr += tolower(ch);
        }

        for(int i = 0;i<(arr.size())/2;++i)
        {
            if(arr[i] != arr[(arr.size()) - i - 1]){
                return false;
            }
        }

        return true;

    }
};
int main ()
{
    string arr;
    getline(cin , arr);

    solution A;
    if(A.ispalindrome(arr))
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}