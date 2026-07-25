/*
Problem: 1878A - How Much Does Daytona Cost?
Platform: Codeforces
Rating: 800

Topic:
- Arrays
- Implementation

Pattern:
- Linear Search

Approach:
- Read the array and the target value k.
- Traverse the array.
- If k is found, print "YES".
- Otherwise, print "NO".

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        int n, k;
        cin >> n >> k;

        bool found = true;
        vector<int> arr(n);

        for(int i = 0;i<n;++i)
        cin >> arr[i];

        for(int i = 0;i<n;++i)
        {
            if(k == arr[i])
            {
                cout << "YES" << endl; 
                found = false;
                break;
            }
        }

        if(found){cout << "NO" << endl;}
    }


    return 0;
}