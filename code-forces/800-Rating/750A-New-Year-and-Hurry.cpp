/*
Problem: 750A - New Year and Hurry
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Math

Pattern:
- Simulation

Important:
- Teaches simulating a process while checking a running constraint.

Approach:
- Calculate the remaining contest time after the party.
- Solve problems one by one, where the ith problem takes 5 × i minutes.
- Stop when the remaining time is insufficient.
- Print the total number of solved problems.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int timeLeft = 240 - k;
    int timeUsed = 0;
    int solved = 0;

    for (int i = 1; i <= n; i++)
    {
        timeUsed += i * 5;

        if (timeUsed <= timeLeft)
            solved++;
        else
            break;
    }

    cout << solved << endl;

    return 0;
}