/*
Problem: 405A - Gravity Flip
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Sorting

Pattern:
- Sorting

Approach:
- Read the heights of all columns.
- Sort the heights in non-decreasing order.
- Print the sorted heights, which represent the final arrangement after gravity is flipped.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0;i<n;++i)
    cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int i = 0;i<n;++i)
    cout << arr[i] << " " ;

    return 0;

}