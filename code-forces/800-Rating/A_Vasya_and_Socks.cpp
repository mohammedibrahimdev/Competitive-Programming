#include<iostream>
using namespace std;
int main ()
{
    int n , m;
    cin >> n  >> m;
    int nums_days = 0;
    int buy_day = 0;

    while(n>0){
    
        buy_day++;
        nums_days++;
        if(buy_day == m){
            n++;
            buy_day = 0;
        }
        n--;
    }

    cout << nums_days << endl;

    return 0;

}