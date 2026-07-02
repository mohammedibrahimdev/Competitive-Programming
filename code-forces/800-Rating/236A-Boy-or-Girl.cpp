/*
Problem: Codeforces 236A - Boy or Girl

Approach:
- Read the username.
- Create a new string to store distinct characters.
- Insert the first character into the new string.
- For each remaining character:
    - Check if it already exists in the new string.
    - If it does not exist, add it.
- Count the number of distinct characters.
- If the count is even, print "CHAT WITH HER!".
- Otherwise, print "IGNORE HIM!".

Key Idea:
- Build a string containing only unique characters.
- The parity (even or odd) of the number of distinct characters
  determines the output.

Time Complexity: O(n²)
Space Complexity: O(n)

Example:
Input:
wjmzbmr

Distinct Characters:
w j m z b r

Count = 6 (Even)

Output:
CHAT WITH HER!
*/
#include<iostream>
using namespace std;
int main ()
{
    string username, arr;
    cin >> username;

    arr += username[0];
    for(int i = 1;i<username.size();++i)
    {
        bool found = false;
        char ch = username[i];

        for(int j = 0;j<arr.size();++j)
            if(arr[j] == ch)
            {
                found = true;
                break;
            }
        
            if(!found)
            arr += ch;
    }

    if((arr.size())%2 == 0)
    cout << "CHAT WITH HER!" << endl;
    else 
    cout << "IGNORE HIM!" << endl;

    return 0;
}