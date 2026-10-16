#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;

    while(t--){
        int n , k;
        cin >> n >> k;

        string arr;
        cin >> arr;

        int ans = 0;
        for(int i = 0;i<n;){

            if(arr[i] == 'W'){
                i++;
                continue;
            }
            else if(arr[i] == 'B'){
                ans++;
                i += k;
            }
        }

        cout << ans << endl;
    }

    return 0;
}