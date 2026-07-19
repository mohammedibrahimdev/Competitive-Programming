/*
Problem: 381A - Sereja and Dima
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Arrays

Pattern:
- Two Pointers
- Simulation

Important:
- Teaches processing elements from both ends using two pointers.

Approach:
- Use two pointers pointing to the leftmost and rightmost cards.
- On each turn, choose the card with the larger value.
- Add the chosen card to the current player's score.
- Alternate turns until all cards are taken.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true;

    while(left <= right)
    {
        int card;

        if(arr[left] > arr[right])
        {
            card = arr[left];
            left++;
        }
        else
        {
            card = arr[right];
            right--;
        }

        if(turn)
            sereja += card;
        else
            dima += card;

        turn = !turn;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}