/*
Problem      : 2009A - Minimize!
Platform     : Codeforces
Rating       : 800


Approach     :
- Try every value `i` from `a` to `b`.
- Calculate `(i - a) + (b - i)`.
- Store each result in a vector.
- Use `min_element()` to find the minimum value.

Time Complexity  : O(b - a)
Space Complexity : O(b - a)
*/

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int testcase;
    cin >> testcase;

    while(testcase--){
        int a, b ;
        cin >> a >> b;

        vector<int> arr;

        for(int i = a;i<=b;++i){
            
            int result = (i - a) + (b - i);
            arr.push_back(result);
        }

        int min = *min_element(arr.begin() , arr.end());

        cout << min << endl;
    }

    return 0;
}