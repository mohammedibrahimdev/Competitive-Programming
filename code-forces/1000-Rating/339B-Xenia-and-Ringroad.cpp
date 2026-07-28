/*
Problem: 339B - Xenia and Ringroad
Platform: Codeforces
Rating: 1000

Topic:
- Math
- Simulation

Pattern:
- Mathematical Observation

Important:
- Teaches replacing step-by-step simulation with direct distance calculation.

Approach:
- Start from house 1.
- For each task, calculate the clockwise distance to the target house.
- If the target is ahead, move directly.
- Otherwise, wrap around the ringroad and continue to the target.
- Accumulate the total time and update the current position.

Mistake / Learning:
- Initially simulated visiting every house, resulting in O(n × m).
- Learned to calculate the travel distance directly using a mathematical observation, reducing the solution to O(m).

Time Complexity: O(m)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long current = 1;
    long long time = 0;

    while (m--)
    {
        long long target;
        cin >> target;

        if (target >= current)
            time += target - current;
        else
            time += (n - current) + target;

        current = target;
    }

    cout << time << endl;

    return 0;
} 