/*
Problem      : Maximum in Table
Platform     : Codeforces
Problem ID   : 509A
Rating       : 800

Topic        : Math, Implementation, Dynamic Programming

Pattern      : Dynamic Programming + Prefix Sum

Important    : Each new row is built from prefix sums of the previous row.

Approach     :
- Start with an array of all 1s.
- Repeatedly build the next row using prefix sums.
- Replace the current array with the new row.
- Find the maximum value in the final row.

Time Complexity  : O(n^3)
Space Complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    
    vector<int> arr(n , 1); 
    n = n -1;
    while(n--){
        vector<int> temp;

        for(int i =1;i<=arr.size();++i){

            int sum_of_arr = 0;

            for(int j = 0;j<i;++j){

                sum_of_arr += arr[j];
            }

            temp.push_back(sum_of_arr);
        }
        arr = temp;
    }

    int max_number = *max_element(arr.begin(), arr.end());

    cout << max_number << endl;

}
