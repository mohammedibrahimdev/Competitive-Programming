/*
Problem: 228A - Is your horseshoe on the other hoof?
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Sorting

Pattern:
- Counting Distinct Elements

Approach:
- Store the four horseshoe colors in an array.
- Sort the array.
- Count how many distinct colors are present.
- Print 4 minus the number of distinct colors.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    sort(arr, arr + 4);

    int distinct = 1;

    for (int i = 1; i < 4; i++)
    {
        if (arr[i] != arr[i - 1])
            distinct++;
    }

    cout << 4 - distinct << endl;

    return 0;
}