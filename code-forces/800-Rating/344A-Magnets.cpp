/*
Problem: 344A - Magnets
Platform: Codeforces
Rating: 800

Topic:
- Implementation

Pattern:
- Counting

Approach:
- Read all magnet orientations.
- Compare each magnet with the next one.
- Whenever two adjacent magnets have different orientations,
  a new group starts.
- Count the number of groups and print the result.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, count = 0;
    cin >> n;
    
    int arr[n];
    for(int i = 0 ;i<n;++i)
    cin  >> arr[i];

    for(int i = 0;i<n - 1;++i)
    {
        if(arr[i] != arr[i + 1])
        {
            count++;
        }
    }

    cout << count  << endl;
    
    
    return 0;
}