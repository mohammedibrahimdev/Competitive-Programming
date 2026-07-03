/*
Problem: Codeforces 69A - Young Physicist

Topic:
- Implementation
- Math
- Matrices
- Simulation

Approach:
- Read the number of force vectors.
- Store all vectors in a 2D array (matrix).
- Calculate the sum of the x, y, and z components separately.
- Check whether the sums of all three components are zero.
- If all sums are zero, the system is in equilibrium.
- Otherwise, it is not in equilibrium.

Key Idea:
- The resultant force is zero only when the total force
  along the x-axis, y-axis, and z-axis is individually zero.

Time Complexity: O(n)
Space Complexity: O(n)

Example:
Input:
3
4 1 7
-2 4 -1
-2 -5 -6

SumX = 0
SumY = 0
SumZ = 0

Output:
YES
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, sumx = 0, sumy = 0, sumz = 0;
    cin >> n;

    int matrix[n][3];

    for(int i = 0;i<n;++i)
    for(int j = 0;j<3;++j)
    {
        cin >> matrix[i][j];
    }

    for(int j = 0;j<3;++j)
    {
        if(j ==0 )
        for(int i = 0;i<n;++i)
        sumx += matrix[i][j];
        else if(j == 1)
        for(int i =0 ;i<n;++i)
        sumy += matrix[i][j];
        else
        for(int i = 0;i<n;++i)
        sumz += matrix[i][j];
    }


    if(sumx == 0 && sumy == 0 && sumz == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}