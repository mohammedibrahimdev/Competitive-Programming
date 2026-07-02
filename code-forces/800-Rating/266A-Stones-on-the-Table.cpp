/*
Problem: Codeforces 266A - Stones on the Table

Approach:
- Read the number of stones and their colors.
- Traverse the string from the second stone.
- Compare each stone with its previous stone.
- If two neighboring stones have the same color,
  one of them must be removed.
- Count every such occurrence.

Key Idea:
- Every pair of adjacent stones with the same color
  contributes exactly one removal.
- We only need to count adjacent equal characters.

Time Complexity: O(n)
Space Complexity: O(1)

Example:
Input:
5
RRGGB

Output:
2
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string stones;
    cin >> stones;

    int removeCount = 0;

    for (int i = 1; i < n; i++)
    {
        if (stones[i] == stones[i - 1])
        {
            removeCount++;
        }
    }

    cout << removeCount << endl;

    return 0;
}