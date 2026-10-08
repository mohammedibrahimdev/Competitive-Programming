/*
Problem      : Cypher
Platform     : Codeforces
Problem ID   : 1703C
Rating       : 800

Topic        : Implementation, Strings

Pattern      : Simulation + Circular Digit Update

Important    : Simulate each U/D operation while keeping every digit in the range 0–9.

Approach     :
- Store the initial lock digits.
- For each digit, process its operation string.
- `U` decreases the digit; `D` increases it.
- Wrap `0 → 9` and `9 → 0`.
- Print the final lock.

Time Complexity  : O(total number of operations)
Space Complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int testcase ;
    cin >> testcase;

    while(testcase--){
        int n;
        cin >> n;

        vector<int> lock(n);
        for(int i =0 ;i<n;++i){
            cin >> lock[i];
        }

        for(int  i = 0;i<n;++i){
            int x;
            string arr;
            cin >> x >> arr;

            for(int j = 0;j<x;++j){

                if(arr[j] == 'U'){
                    lock[i] -= 1;

                    if(lock[i] < 0)
                        lock[i] = 9;
                }
                else{
                    lock[i] += 1;

                    if(lock[i] > 9)
                        lock[i] = 0;
                }
            }
        }

        for(int i = 0;i<n;++i){
            cout << lock[i] << " " ;
        }
        cout << endl;


    }
}