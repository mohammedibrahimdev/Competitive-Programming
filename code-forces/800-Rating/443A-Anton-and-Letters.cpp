/*
Problem: 443A - Anton and Letters
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Strings
- STL

Pattern:
- Set

Approach:
- Read the entire input line.
- Traverse the string and extract only alphabetic characters.
- Insert each letter into a set to keep only unique letters.
- Print the number of distinct letters.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/
#include<set>
#include<cctype>
#include<iostream>
using namespace std;
int main ()
{
    string arr;
    getline(cin , arr);

    set<char> s;
    for(int i = 0;i<arr.size();++i)
    {
        if(isalpha(arr[i]))
            s.insert(arr[i]);

    }

    cout << s.size() << endl;

    return  0;
}