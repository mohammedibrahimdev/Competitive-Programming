/*
Problem: 996A - Hit the Lottery
Platform: Codeforces
Rating: 800

Topic:
- Greedy
- Math

Pattern:
- Greedy

Approach:
- Store the available bill denominations.
- Start from the largest denomination.
- Take as many bills as possible of the current denomination.
- Reduce the remaining amount and continue with smaller bills.
- Print the total number of bills used.

Time Complexity: O(1)
Space Complexity: O(1)
*/
#include<iostream>
using  namespace std;
int main ()
{
    int arr[] = {1, 5, 10 , 20 , 100};
    int n;
    cin >> n;


    int  bills = 0;
    for(int i = 4;i >= 0;--i)
    {
        bills += n/arr[i];
        n %= arr[i];
    }

    cout << bills << endl;

    return 0;
}