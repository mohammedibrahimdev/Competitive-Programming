/*
Problem: 318A - Even Odds
Platform: Codeforces
Rating: 900

Topic:
- Math
- Implementation

Pattern:
- Mathematical Observation

Approach:
- Count how many odd numbers appear first in the sequence.
- If k is within the odd part, directly compute the k-th odd number.
- Otherwise, compute the corresponding even number.
- Print the result.

Time Complexity: O(1)
Space Complexity: O(1)
*/#include<iostream>
using namespace std;
int main ()
{
    long long int  n, k;
    cin >> n >>k;
    int oddcount = (n + 1)/2;
 
    long long int ans =0;
    if( k<= oddcount)
    ans = 2 * k - 1;
    else 
    ans = 2 * (k - oddcount);
    
 
    cout << ans << endl;
 
    return 0;
} 