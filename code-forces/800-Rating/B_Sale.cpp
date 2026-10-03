#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int n ,m;
    cin >> n >> m;
    
    vector<int> arr(n);
    for(int i = 0;i<n;++i){
        cin >> arr[i];
    }

    int ans = 0;
    sort(arr.begin(), arr.end());

    for(int i = 0;i<n && m > 0 ;++i){
        
        if(arr[i] < 0){
            ans += abs(arr[i]);
            m--;
        }
    }

    cout << ans << endl;
    return 0;
}