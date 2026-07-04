/*
Problem: 467A - George and Accommodation
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Greedy

Pattern:
- Counting

Approach:
- Read the number of rooms.
- For each room, read the current occupants (p) and capacity (q).
- If the room has at least two free spots (q - p >= 2), count it.
- Print the total number of suitable rooms.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, rooms = 0;
    cin >> n;

    while(n--)
    {
        int p, q;
        cin >> p >> q;

        if(p < q && 2 <= (q - p))
        rooms++;
    }

    cout << rooms << endl;

    return 0;
}