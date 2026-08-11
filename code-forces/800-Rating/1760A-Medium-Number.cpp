/*
Problem: 1760A - Medium Number
Platform: Codeforces
Rating: 800

Topic:
- Sorting
- Arrays

Approach:
- Read the three numbers.
- Sort them in ascending order.
- The middle element is the answer.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main ()
{   
    int loop;
    cin >> loop;

    while(loop--){
        vector<int> arr(3);

        for(int i =0;i<3;++i){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        
        cout << arr[1] << endl; 
    }
    return 0;
}