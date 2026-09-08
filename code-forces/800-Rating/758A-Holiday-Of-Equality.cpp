/*
Problem: 758A - Holiday Of Equality
Platform: Codeforces
Rating: 800

Topic:
- Math
- Implementation

Pattern:
- Find Maximum + Difference Calculation

Approach:
- Find the largest value.
- Calculate the difference between the largest value and every element.
- Add all differences.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<vector>
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i =0 ;i<n;++i)
    cin >> arr[i];

    int largest = arr[0];
    for(int i = 1;i<n;++i)
    {
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    int ans =0 ;
    for(int i = 0;i<n;++i){
        ans += (largest - arr[i]);
    }

    cout << ans << endl;

    return 0;
}