/*
Problem: 155A - I_love_%username%
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Arrays

Pattern:
- Running Maximum and Minimum

Important:
- Teaches how to maintain running maximum and minimum while traversing an array.

Approach:
- Initialize the first score as both the best and worst.
- Traverse the remaining scores.
- If a new maximum or minimum is found, update it and increment the amazing count.
- Print the total number of amazing performances.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    int best = arr[0];
    int worst = arr[0];                                              
    int amazing = 0;
 
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > best)
        {
            best = arr[i];
            amazing++;
        }
        else if (arr[i] < worst)
        {
            worst = arr[i];
            amazing++;
        }
    }
 
    cout << amazing << '\n';
 
    return 0;
}
