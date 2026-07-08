/*
Problem: 469A - I Wanna Be the Guy
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- STL

Pattern:
- Set

Approach:
- Read the levels that Little X and Little Y can pass.
- Store all level numbers in a set to remove duplicates automatically.
- If the number of unique levels equals n, all levels can be completed.
- Otherwise, some levels are missing.

Time Complexity: O((p + q) log n)
Space Complexity: O(n)
*/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> levels;

    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        levels.insert(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        levels.insert(x);
    }

    if (levels.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}