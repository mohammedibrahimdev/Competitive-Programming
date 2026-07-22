/*
Problem: 732A - Buy a Shovel
Platform: Codeforces
Rating: 800

Topic:
- Math
- Brute Force

Pattern:
- Enumeration

Important:
- Teaches checking a small number of possible cases instead of deriving a formula.

Approach:
- Try buying 1, 2, 3, ... shovels.
- Compute the total cost for each case.
- If the last digit of the total cost is k or 0, print the number of shovels.
- Stop as soon as the first valid answer is found.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, k;
    cin >> n >> k;

    for(int i = 1;i<=10;++i)
    {
        	int number = n * i;
        if(number == k){
        	cout << i << endl;
        	return 0;
		}
        
        if((number)%10 == k || (number)%10 == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
}