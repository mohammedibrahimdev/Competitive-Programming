#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;

    while(t--){
        long long a , b;
        cin >> a >> b;

        long long d = abs(a - b);
        int moves = 0;

        while(d>0){
            
            if(d>= 10){
                d -= 10;
            }
            else{
                d = 0;
            }

            moves++;
        }

        cout << moves << endl;
    }

    return 0;
}