#include<iostream>
using namespace std;

int reverse(int number)
{
    int  reverse = 0;
    if(number == 0) return 0;

    bool sign = (number < 0);
    number = abs(number);
    
    while(number > 0)
    {
        int digit = number%10;
        reverse = (reverse * 10) + digit;
        number = number/10;
    }

    (sign)?reverse = -reverse:reverse;

    return reverse;
}

int main ()
{
    int number;
    cin >> number;

    cout << reverse(number) << endl;

    return 0;
}