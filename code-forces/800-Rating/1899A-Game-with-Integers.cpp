/*
Problem: 1899A - Game with Integers
Platform: Codeforces
Rating: 800

Topic:
- Math
- Game Theory

Pattern:
- Mathematical Observation

Approach:
- Read the integer for each test case.
- If the number is divisible by 3, the second player wins.
- Otherwise, the first player wins.
- Print the winner accordingly.

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int loop;
    cin >> loop;

    while(loop--){
    int number;
    cin >> number;

    if(number%3 == 0)
    cout << "Second" << endl;
    else
    cout << "First" << endl;
    }
    return 0;

}