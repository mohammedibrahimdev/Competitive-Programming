/*
Problem: 580A - Kefa and First Steps
Platform: Codeforces
Rating: 900

Topic:
- Arrays
- Implementation

Pattern:
- Longest Consecutive Segment

Approach:
- Traverse the array once.
- Maintain the length of the current non-decreasing segment.
- If the current element is greater than or equal to the previous one,
  extend the current segment.
- Otherwise, update the maximum length found and start a new segment.
- Print the maximum segment length.

Time Complexity: O(n)
Space Complexity: O(1)
*/
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

    int m1 = 1, m2 =1;
    for(int i = 0;i<n - 1;++i)
    {
        if(arr[i] <= arr[i +1])
        m1++;
        else {

            m2 = max(m2, m1);
            m1 = 1;
	
		}
    }

    cout << max(m1,m2) << endl;

    return 0;
}