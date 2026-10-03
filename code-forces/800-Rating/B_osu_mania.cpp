#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int testcases;
    cin >> testcases;

    while(testcases--){
        int num_of_string;
        cin >> num_of_string;
        vector<int> indexs;

        while(num_of_string--){
            string arr;
            cin >> arr;

            indexs.push_back(arr.find('#') + 1);
        }

        reverse(indexs.begin() , indexs.end());

        for(int number : indexs){
            cout << number << " " ;
        }
        cout << endl;
    }

    return 0;
}