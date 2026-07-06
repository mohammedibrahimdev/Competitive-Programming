/*
Problem: 160A - Twins
Platform: Codeforces
Rating: 900

Topic:
- Greedy
- Sorting

Pattern:
- Greedy

Approach:
- Calculate the total value of all coins.
- Sort the coins in descending order.
- Pick the largest coins one by one.
- Stop when the selected coins have a greater total value than the remaining coins.
- Print the number of selected coins.

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include <functional>
#include<algorithm>
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    
    int sum = 0, sum1 = 0;;
    int arr[n];
    for(int i =0 ;i<n;++i){
    cin >> arr[i];
    sum1 += arr[i];
    }

    sort(arr, arr + n, greater<int>());
    
    for(int i =0 ;i<n;++i)
    {
        sum += arr[i];
        if(sum > (sum1 - sum))
        {
            cout << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}
