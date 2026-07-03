/*
Problem: Codeforces 617A - Elephant

Topic:
- Math
- Greedy
- Implementation

Approach:
- The elephant can move a maximum of 5 units in one step.
- To minimize the number of steps, always take a step of length 5 whenever possible.
- Compute the ceiling of (distance / 5) using integer arithmetic.

Key Idea:
- Taking the largest possible step (5) at every move is always optimal.
- The expression (distance + 4) / 5 performs ceiling division without using floating-point arithmetic.

Time Complexity: O(1)
Space Complexity: O(1)

Example:
Input:
12

Steps:
5 + 5 + 2

Output:
3
*/

#include<iostream>
using namespace std;
int  main ()
{
    int steps = 5 , distance;
    cin >> distance;

    cout << (distance + 4)/steps << endl;

    return 0;
}