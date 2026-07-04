/*
Problem: Codeforces 677A - Vanya and Fence

Topic:
- Implementation
- Math

Pattern:
- Simulation

Approach:
- Read the number of friends and the fence height.
- Traverse each friend's height.
- If a friend's height is greater than the fence, add 2 to the required width.
- Otherwise, add 1.
- Print the total width.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;
int main ()
{
    int n, h, w =0;
    cin >> n  >> h;

    while(n--)
    {
        int number;
        cin >> number;

        if(number  > h)
        w += 2;
        else if(h == number || number < h) w++;
    }

    cout << w << endl;

    return 0;
}