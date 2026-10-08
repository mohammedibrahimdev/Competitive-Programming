/*
Problem      : B. Did Not Go to Print
Platform     : Codeforces
Problem ID   : 2275B

Topic        : Strings, Stack, Implementation

Pattern      : Stack + Greedy Matching

Important    : Use a stack to match each `2` with the most recent unmatched `1`.

Approach     :
- Push the index of every `1` into the stack.
- For `2`, remove the most recent unmatched `1`.
- If no `1` exists, mark the current index.
- Every `0` is immediately marked.
- Collect and print the indices that were not marked.

Time Complexity  : O(n)
Space Complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin >> test;

    while(test--){
        int n;
        string s;
        cin >> n >> s;

        stack<int> st;
        vector<bool> printed(n+1 , false);

        for(int i = 1;i<=n;++i){

            if(s[i - 1] == '1'){
                st.push(i);
            }
            else if (s[i - 1] == '2')
            {
                if(!st.empty()){
                    printed[st.top()] = true;
                    st.pop();
                }
                else {
                    printed[i] = true;
                }
            }
            else {
                printed[i] = true;
            }
            
        }

        vector<int> ans;

        for(int i = 1;i<=n;++i){
            if(!printed[i]){
                ans.push_back(i);
            }
        }

        cout << ans.size() << endl;

        for(int x : ans){
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}