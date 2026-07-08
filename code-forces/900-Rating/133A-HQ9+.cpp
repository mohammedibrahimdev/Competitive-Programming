/*
Problem: 133A - HQ9+
Platform: Codeforces
Rating: 900

Topic:
- Implementation
- Strings

Pattern:
- Character Search

Approach:
- Traverse the program string.
- Check whether it contains any of the characters 'H', 'Q', or '9'.
- If any one of them is found, print "YES".
- Otherwise, print "NO".

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;
int main ()
{
    string arr, target = "HQ9+";
    cin >> arr;

    int len = arr.size();

    if((len == 1) && (arr[0] == 'H' || arr[0] == 'Q' || arr[0] == '9'))
    {
        cout << "YES" << endl;
        return 0;
    }

    bool  print = false;
    for(int i = 0;i<3;++i)
    {
        for(int j = 0;j<len;++j)
        {
            if(arr[j] == target[i])
            {
                cout << "YES" << endl;
                print = true;
                return 0;
            }
        }
    
    }

    if(!print) cout << "NO" << endl;

    return 0;

}