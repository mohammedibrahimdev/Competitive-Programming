/*
Problem: Codeforces 59A - Word

Approach:
- Read the input word.
- Count the number of uppercase and lowercase letters.
- If lowercase letters are more, convert the entire word to lowercase.
- If uppercase letters are more, convert the entire word to uppercase.
- If both counts are equal, convert the entire word to lowercase.

Key Idea:
- Compare the frequency of uppercase and lowercase letters.
- Transform the entire string based on the majority case.

Time Complexity: O(n)
Space Complexity: O(1)

Example:
Input:
HoUse

Uppercase = 2
Lowercase = 3

Output:
house

Input:
ViP

Uppercase = 2
Lowercase = 1

Output:
VIP
*/
#include<iostream>
using namespace std;
int main ()
{
    int upper = 0, lower = 0;
    string arr;
    cin >> arr;

    for(char &ch : arr)
    {
        if(islower(ch)) lower++;
        else upper++;
    }

    if(upper < lower)
        for(char &ch : arr)
        ch = tolower(ch);
    else if(upper > lower)
        for(char &ch : arr)
        ch = toupper(ch);
    else
        for(char &ch : arr)
        ch = tolower(ch);


    cout << arr << endl;
    
    return 0;
}