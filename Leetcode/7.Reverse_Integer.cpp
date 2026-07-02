/*
Problem: Reverse Integer (LeetCode 7)

Approach:
- Store whether the number is negative.
- Convert the number to its absolute value.
- Extract each digit using the modulo (%) operator.
- Build the reversed number by multiplying the current result by 10
  and adding the extracted digit.
- Restore the original sign before returning the result.

Key Idea:
- Reverse the number one digit at a time.
- Preserve the sign separately while reversing the absolute value.

Note:
- This implementation does NOT handle 32-bit integer overflow.
- The complete LeetCode solution should return 0 if the reversed
  integer goes outside the range [-2^31, 2^31 - 1].

Time Complexity: O(log10 n)
Space Complexity: O(1)

Example:
Input: 123
Output: 321

Input: -456
Output: -654
*/

#include<iostream>
using namespace std;

int reverse(int number)
{
    int  reverse = 0;
    if(number == 0) return 0;

    bool sign = (number < 0);
    number = abs(number);
    
    while(number > 0)
    {
        int digit = number%10;
        reverse = (reverse * 10) + digit;
        number = number/10;
    }

    (sign)?reverse = -reverse:reverse;

    return reverse;
}

int main ()
{
    int number;
    cin >> number;

    cout << reverse(number) << endl;

    return 0;
}