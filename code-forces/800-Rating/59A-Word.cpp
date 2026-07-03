#include<iostream>
using namespace std;
int main ()
{
    int upper = 0, lower = 0;
    string arr;
    cin >> arr;

    for(char &ch : arr)
    {
        if(islower(ch)) lower++;
        else upper++;
    }

    if(upper < lower)
        for(char &ch : arr)
        ch = tolower(ch);
    else if(upper > lower)
        for(char &ch : arr)
        ch = toupper(ch);
    else
        for(char &ch : arr)
        ch = tolower(ch);


    cout << arr << endl;
    
    return 0;
}