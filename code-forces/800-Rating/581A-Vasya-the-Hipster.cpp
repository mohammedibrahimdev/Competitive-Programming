/*
Problem: 581A - Vasya the Hipster
Platform: Codeforces
Rating: 800

Topic:
- Math
- Greedy

Pattern:
- Greedy

Important:
- Teaches maximizing one value first, then using the remaining resources.

Approach:
- The maximum number of different-color days is the minimum of red and blue socks.
- Remove those socks from the larger pile.
- Pair the remaining same-color socks.
- Print the number of different-color days and same-color days.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int red, blue;
    cin >> red >> blue;
 
    int days = min(red, blue);
    int n = max(red, blue);

    int n2 = 0;
    n = n - days;
	

    cout << days << " " << n/2 << endl;

    return 0;
}