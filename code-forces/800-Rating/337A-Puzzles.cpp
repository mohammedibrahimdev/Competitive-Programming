/*
Problem: 337A - Puzzles
Platform: Codeforces
Rating: 900

Topic:
- Sorting
- Greedy

Pattern:
- Sliding Window on Sorted Array

Important:
- Teaches finding the minimum range after sorting instead of checking all combinations.

Approach:
- Sort all puzzle sizes.
- Check every group of n consecutive puzzles.
- The difference between the largest and smallest in the group gives the range.
- Take the minimum possible difference.

Time Complexity: O(m log m)
Space Complexity: O(m)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> arr(m);
 
    for(int i = 0; i < m; i++)
        cin >> arr[i];
 
    sort(arr.begin(), arr.end());
 
    int ans = INT_MAX;
 
    for(int i = 0; i <= m - n; i++)
    {
        ans = min(ans, arr[i + n - 1] - arr[i]);
    }
 
    cout << ans << endl;
 
    return 0;
}
