/*
Problem: 1692A - Marathon
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Comparison

Pattern:
- Counting

Important:
- Teaches counting elements that satisfy a given condition.

Approach:
- Read the four distances.
- Compare the first distance with the remaining three.
- Count how many distances are greater than the first.
- Print the count.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    long int loop;
    cin >> loop;

    while(loop--){
    long long int a, b, c ,d;
    cin >> a >> b >> c >> d;

    int count =0;

    if(a < b)count++;
    if(a < c)count++;
    if(a < d)count++;

    cout << count << endl;
    }

    return 0;
    
}