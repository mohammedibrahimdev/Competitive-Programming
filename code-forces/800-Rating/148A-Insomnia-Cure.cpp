/*
Problem: 148A - Insomnia Cure
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Math
- STL

Pattern:
- Set

Approach:
- If any divisor is 1, every dragon is affected.
- Otherwise, iterate through all dragons from 1 to d.
- Insert each dragon into a set if its number is divisible by k, l, m, or n.
- Print the number of unique dragons stored in the set.

Time Complexity: O(d log d)
Space Complexity: O(d)
*/

#include<set>
#include<iostream>
using namespace std;
int main ()
{
    int k, l,m ,n,d;
    cin >> k >> l >> m >> n >> d;

    if(k == 1  || l == 1 || m == 1 || n == 1){
        cout << d << endl;
        return 0;
    }

    set<int> arr;

    for(int i  = 1;i<=d;++i)
    {
        if(i%k ==0 ) arr.insert(i);

        if(i%l == 0) arr.insert(i);

        if(i%m == 0) arr.insert(i);

        if(i%n == 0) arr.insert(i);
    }

    cout << arr.size() << endl;

    return 0;

}