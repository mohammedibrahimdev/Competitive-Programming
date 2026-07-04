/*
Problem: 266B - Queue at the School
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Simulation
- Strings

Pattern:
- Simulation

Approach:
- Simulate the queue for t seconds.
- In each second, scan the queue from left to right.
- Whenever "BG" is found, swap them and skip the next position.
- Print the final queue after all simulations.

Time Complexity: O(n × t)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int n,t;
    cin >> n >> t;

    string arr;
    cin >>  arr;

    for(int i = 0;i<t;++i)
    {
        for(int j = 0;j<(arr.size()) - 1;++j)
        {
            if(arr[j] == 'B' && arr[j + 1] == 'G')
            {
                char ch = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ch;
                j++;
            }

        }
    }


    cout << arr << endl;

    return 0;
}