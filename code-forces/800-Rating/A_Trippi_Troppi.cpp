#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    cin.ignore();

    for(int j = 0;j<t;++j){

        string arr;
        getline(cin  , arr);

        string ans;
        ans += arr[0];
        for(int i = 1;i<arr.size();++i){

            if(arr[i] == ' '){
                ans += arr[i + 1];
            }
        }

        for(int i = 0;i<ans.size();++i){
            cout << ans[i] ;
        }

        cout << endl;
    }

    return 0;
}