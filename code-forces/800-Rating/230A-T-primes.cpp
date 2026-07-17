/*
Problem: 230B - T-primes
Platform: Codeforces
Rating: 1300

Topic:
- Math
- Number Theory

Pattern:
- Prime Checking
- Square Root Observation

Important:
- Helps identify the mathematical observation that avoids brute force.
- Teaches recognizing special properties of numbers.

Approach:
- Find the square root of the number.
- If the square root is not an integer, it cannot be a T-prime.
- If the square root is prime, print "YES"; otherwise print "NO".

Time Complexity: O(sqrt(n)) per test case
Space Complexity: O(1)
*/

#include<cmath>
#include<vector>
#include<iostream>
using namespace std;

bool isPrime(long long n)
{
    if(n <= 1)
    return false;

    for(long long i = 2;i*i <= n;++i)
    {
        if(n%i == 0)
        return false;
    }
    
    return true;
}
int main ()
{
    long long int n;
    cin >> n;
    
    while(n--)
{
        long long int number;
        cin >> number;

        long long  int r = sqrt(number);

        if(r * r != number)
        cout << "NO" << endl;
        else if(isPrime(r))
        cout << "YES" << endl;
        else 
        cout << "NO" << endl;
    }
    
    return 0;
}