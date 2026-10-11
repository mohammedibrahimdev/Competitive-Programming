#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        string  arr;
        cin >> n >> arr;

        int balance = 0;
        for(int i = 0;i<n;++i){

            if(arr[i] == '('){
                balance++;
            }
            else if(arr[i] == ')'){
                
                if(balance != 0)
                    balance--;
                else
                    balance = 0;

            }
        }

        cout << balance << endl;
    }

    return 0;
}