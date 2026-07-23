
/*
Problem: 1999A - A + B Again?
Platform: Codeforces
Rating: 800

Topic:
- Math
- Implementation

Pattern:
- Digit Extraction

Important:
- Teaches extracting digits of a number using modulo and division.

Approach:
- Read the number.
- Extract each digit using `% 10`.
- Add the digits to the sum.
- Print the final sum.

Time Complexity: O(d), where d is the number of digits
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
        int number;
        cin >> number;

        int sum = 0;
        while(number > 0)
        {
            int digit = number%10;
            sum += digit;
            number /= 10;
        }

        cout << sum << endl;
    }


    return 0;
}