/*
Problem: 1857A - Array Coloring
Platform: Codeforces
Rating: 800

Topic:
- Math
- Parity

Pattern:
- Even/Odd Observation

Important:
- Teaches solving problems using parity instead of simulating the process.

Approach:
- Compute the sums of elements at alternating positions.
- If both sums have the same parity, print "YES".
- Otherwise, print "NO".

Mistake / Learning:
- Initially solved the problem using two alternating sums.
- Learned that only the parity of the total sum matters, leading to a much simpler solution.

Time Complexity: O(n)
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
        int a = 0, b = 0;
        int numberloop;
        cin >> numberloop;

        bool first = true;
        bool second = false;
        while(numberloop--)
        {   
            int number;
            cin >> number;

            if(first)
            {
                first = false;
                a += number;
                second = true;
            }
            else if(second)
            {
                first = true;
                b += number;
                second = false;
            }
        }

        if((a%2 == 0 && b%2 == 0 ) || (a%2 != 0 && b%2 != 0) || (a == b))
        cout << "YES" << endl;
        else 
        cout << "NO" << endl;
    }

    return 0;
}