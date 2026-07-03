/*
Problem: LeetCode 509 - Fibonacci Number

Topic:
- Dynamic Programming
- Math

Pattern:
- DP (Space Optimization)
- Bottom-Up Iteration

Approach:
- Handle the base cases (0 and 1).
- Iteratively compute the next Fibonacci number.
- Store only the previous two values to achieve O(1) space.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;

class Solution{

    public:
    int fib(int n)
    {
        if(n == 0) return 0;

        if(n == 1) return 1;

        int first = 0, second = 1;
        for(int i = 2;i<=n;++i)
        {
            int next = first + second;
            first = second;
            second = next;
        }

        return second;
    }
};

int main ()
{
    int n;
    cin >> n;

    Solution p;

    cout << p.fib(n) << endl;

    return 0;
}