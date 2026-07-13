#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int bus = 0;

    vector<int> arr(n);
    for(int i = 0;i<n;++i)
    cin >> arr[i];

    int sum = 0;
    for(int i = 0;i<n;++i)
    {
        if( (4 >= arr[i] && arr[i] == 3) ||4 == arr[i])
        bus++;
        else 
        sum += arr[i];
        
         if((4 >= sum && sum == 3) ||4 == sum)
        {
            bus++;
            sum = 0;
        }
    }

    cout << bus << endl;

    return 0;

}