/*
Problem: 1399A - Remove Smallest
Platform: Codeforces
Rating: 800

Topic:
- Sorting
- Greedy

Pattern:
- Sorting + Adjacent Comparison

Approach:
- Sort the array in ascending order.
- Compare every pair of adjacent elements.
- If the difference between any two adjacent elements is greater than 1, print "NO".
- Otherwise, print "YES".

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0;i<n;++i){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        bool possible = true;
        for(int i = 0;i<n - 1;++i){

            if(abs(arr[i] - arr[i + 1]) > 1){

                possible = false;
                break;
            }
        }

        cout << ((possible)? "YES" : "NO")<< endl;
    }
    return 0;
}