#include<iostream>
using namespace std;
int main ()
{
    string s;
    cin >> s;

    string a = s;
    string b = s;

    a.pop_back();
    b.erase(b.size() - 2, 1);

    long long x = stoll(s);
    long long y = stoll(a);
    long long z = stoll(b);

    cout << max(max(x, y), z) << endl;

    return 0;


}