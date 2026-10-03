/*
Problem      : A. Minimize!
Platform     : Codeforces
Problem ID   : 2126A
Rating       : 800

Topic        : Math, Implementation , brute force

Pattern      : Digit Extraction + Minimum

Important    : Teaches extracting digits using `% 10` and finding the minimum digit.

Approach     :
- Extract each digit using `number % 10`.
- Compare it with the current minimum.
- Remove the last digit using `number /= 10`.
- Print the smallest digit.

Time Complexity  : O(log n)
Space Complexity : O(1)
*/

#include<climits>
#include<iostream>
using namespace std;
int main ()
{
    int testcases;
    cin >> testcases;

    while(testcases--){
        int number;
        cin >> number;

        int min_num = INT_MAX;
        while(number>0){
            int digit = number%10;
            
            if(min_num > digit){
                min_num = digit;
            }

            number /= 10;
        }

        cout << min_num << endl;
    }
}