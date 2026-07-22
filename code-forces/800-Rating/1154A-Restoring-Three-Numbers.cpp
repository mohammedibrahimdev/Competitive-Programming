/*
Problem: 1154A - Restoring Three Numbers
Platform: Codeforces
Rating: 800

Topic:
- Math
- Sorting

Pattern:
- Mathematical Observation

Important:
- Teaches using sorting to identify the maximum value and derive the remaining values.

Approach:
- Read the four given numbers.
- Sort the numbers in ascending order.
- The largest number is the sum of the three original numbers.
- Subtract each of the other three numbers from the largest to recover the original numbers.
- Print the three restored numbers.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<algorithm>
#include<iostream>
using namespace std;
int main ()
{
    int arr[4];
    for(int i = 0;i<4;++i)
    cin >> arr[i];

    sort(arr, arr + 4);

    cout << arr[3] - arr[1] << " ";
    cout << arr[3] - arr[2] << " ";
    cout << arr[3] - arr[0] << " " << endl;

    return 0;
}