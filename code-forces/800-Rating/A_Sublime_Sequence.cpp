#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += x;
            }
            else
            {
                sum -= x;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}