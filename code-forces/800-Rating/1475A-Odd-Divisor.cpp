/*
Problem: 1475A - Odd Divisor
Platform: Codeforces
Rating: 800

Topic:
- Math
- Number Theory

Pattern:
- Factor Reduction

Important:
- Teaches identifying powers of a number by removing repeated factors.

Approach:
- Remove all factors of 2 from the number.
- If the remaining value is 1, the number is a power of 2, so print "NO".
- Otherwise, it has an odd divisor greater than 1, so print "YES".

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        long long number;
        cin >> number;

        while(number % 2 == 0)
        {
            number /= 2;
        }

        if(number == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}