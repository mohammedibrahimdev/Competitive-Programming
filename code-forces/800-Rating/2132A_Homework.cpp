/*
Problem      : A. Homework
Platform     : Codeforces
Problem ID   : 2132A
Rating       : 800

Topic        : Strings, Implementation

Pattern      : Deque + Simulation

Important    : Teaches using a deque to efficiently insert elements at both ends.

Approach     :
- Initialize a deque with string `b`.
- Traverse the operation string.
- If the operation is `V`, insert the character at the front.
- Otherwise, insert the character at the back.
- Print the final deque.

Time Complexity  : O(n + m)
Space Complexity : O(n + m)
*/

#include<deque>
#include<iostream>
using namespace std;
int main ()
{
    int tst;
    cin >> tst;

    while(tst--){
        
        int len_b_string , len_a_string;
        string b, a , order_string;
        
        cin >> len_b_string;
        cin >> b;

        cin >> len_a_string;
        cin >> a;
        cin >> order_string;

        deque<char> ans(b.begin(), b.end());
        for(int i = 0;i<order_string.size();++i){

            if(order_string[i] == 'V'){
                ans.push_front(a[i]);
            }
            else {
                ans.push_back(a[i]);
            }

        }

        for(int i = 0;i<ans.size();++i){
            cout << ans[i];
        }

        cout << endl;
    }
}