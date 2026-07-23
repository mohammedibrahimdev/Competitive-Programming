/*
Problem: 706B - Interesting Drink
Platform: Codeforces
Rating: 900

Topic:
- Binary Search
- Sorting

Pattern:
- Binary Search on Sorted Array

Important:
- Teaches using binary search to answer multiple range queries efficiently.

Approach:
- Read and sort the drink prices.
- For each query, use `upper_bound()` to find the first price greater than the given coins.
- The index returned by `upper_bound()` equals the number of drinks that can be bought.
- Print the count for each query.

Time Complexity: O(n log n + q log n)
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

    int days;
    cin >> days;

    while(days--)
    {
        int coins;
        cin >> coins;

        auto it = upper_bound(arr.begin(), arr.end(), coins);

        int count = it - arr.begin();
        cout << count << endl;
    }

    return 0;

}

/*
Mistake / Learning:
- First solved each query using linear search (O(n) per query).
- After learning STL Binary Search, replaced it with upper_bound() for O(log n) per query.
- Learned that sorting once + binary search is much more efficient for multiple queries.
*/