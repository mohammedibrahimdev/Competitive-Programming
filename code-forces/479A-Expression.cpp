/*
Problem: 479A - Expression
Platform: Codeforces
Rating: 800

Topic:
- Math
- Brute Force
- Implementation

Pattern:
- Enumeration

Approach:
- Evaluate all possible valid expressions using the given numbers.
- Compute the value of each expression.
- Keep track of the maximum value.
- Print the largest result.

Time Complexity: O(1)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;
int main ()
{
    int a, b,  c;
    cin >> a >> b >> c;

    int largest = 0;
    int a1 = (a + b * c);
    int a2 = (a * b + c);
    int a3 = (a * b *c);
    int a4 = ((a + b) * c);
    int a5 = a + b + c;
    int a6 = a * (b + c);

    if(a1 > largest) largest = a1;
    if(a2 > largest) largest = a2;
    if(a3 > largest) largest = a3;
    if(a4 > largest) largest = a4;
    if(a5 > largest) largest = a5;
    if(a6 > largest) largest = a6;

    cout << largest << endl;

    return 0;

}