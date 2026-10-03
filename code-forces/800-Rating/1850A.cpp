#include<iostream>
using namespace std;
int main ()
{
    int loop;
    cin >> loop;

    while(loop--){
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b >= 10){
            cout << "Yes" << endl;
            break;
        }
        else if(b + c >= 10){
            cout << "yes" << endl;
            break;
        }
        else if(a + c >= 10){
            cout << "Yes"<< endl;
            break;
        }
        else 
        cout << "NO" << endl;
    }

    return 0;
}