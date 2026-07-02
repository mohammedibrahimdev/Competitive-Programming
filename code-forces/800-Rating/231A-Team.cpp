/*
Problem: 231A - Team
Platform: Codeforces
Rating: 800
Topic: Implementation

Approach:
- Read the number of problems.
- For each problem, read the opinions of the three friends.
- If at least two friends are sure about the solution, they solve the problem.
- Count such problems and print the answer.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n, count  =0 ;
    cin >> n;

    for(int i = 0;i<n;++i){
        int a , b, c;
        cin >> a >> b >> c;
        if((a + b + c) >= 2 )
        count++;
    }
    cout << count;
    return 0;
    
}