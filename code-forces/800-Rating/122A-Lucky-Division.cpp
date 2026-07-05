/*
Problem: 122A - Lucky Division
Platform: Codeforces
Rating: 800

Topic:
- Math
- Brute Force
- Implementation

Pattern:
- Enumeration

Approach:
- Store all lucky numbers up to 1000.
- Check whether the given number is divisible by any lucky number.
- If divisible, print "YES"; otherwise, print "NO".

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;
 
int main()
{
    int number;
    cin >> number;
    int lucky[] = {
        4, 7,
        44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777
    };
 
    bool found = false;
 
    for (int x : lucky)
    {
        if (number % x == 0)
        {
            found = true;
            break;
        }
    }
 
    if (found)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}