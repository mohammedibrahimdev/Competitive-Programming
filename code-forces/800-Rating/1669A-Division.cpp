/*
Problem: 1669A - Division?
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Conditions

Pattern:
- Range Checking

Important:
- Teaches classifying values based on given ranges.

Approach:
- Read the rating for each test case.
- Compare the rating with the division ranges.
- Print the corresponding division.

Time Complexity: O(1) per test case
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

        if(number >= 1900)
        cout << "Division 1" << endl;
        else if(1600 <= number && number <= 1899)
        cout << "Division 2" << endl;
        else if(1400 <= number && number <= 1599)
        cout << "Division 3" << endl;
        else 
        cout << "Division 4" << endl;
    }

    return 0;
}