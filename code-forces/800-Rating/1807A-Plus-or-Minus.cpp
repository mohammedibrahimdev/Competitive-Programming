/*
Problem: 1807A - Plus or Minus
Platform: Codeforces
Rating: 800

Topic:
- Math
- Implementation

Pattern:
- Condition Checking

Approach:
- Read the three integers.
- If a + b equals c, print '+'.
- Otherwise, print '-'.

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        int a , b,c;
        cin >> a >> b >> c;

        if((a + b) == c)
        cout << '+' << endl;
        else cout << '-' << endl;
    }

    return 0;
}