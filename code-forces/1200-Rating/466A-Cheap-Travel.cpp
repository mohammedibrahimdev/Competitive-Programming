/*
Problem: 466A - Cheap Travel
Platform: Codeforces
Rating: 1200

Topic:
- Math
- Greedy
- Implementation

Pattern:
- Cost Comparison

Important:
- Teaches comparing different strategies and choosing the minimum cost.

Approach:
- Calculate the cost if every ride is bought individually.
- Calculate the cost if all rides are covered using special tickets.
- Calculate the mixed strategy: use special tickets for groups of m rides and individual tickets for the remaining rides.
- Take the minimum of all three costs.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int individual = n * a;
    int specialOnly = ((n + m - 1) / m) * b;
    int mixed = (n / m) * b + (n % m) * a;

    cout << min({individual, specialOnly, mixed}) << endl;

    return 0;
}