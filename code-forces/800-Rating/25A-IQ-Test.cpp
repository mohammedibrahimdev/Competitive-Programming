/*
Problem: 25A - IQ Test
Platform: Codeforces
Rating: 1300

Topic:
- Implementation
- Math

Pattern:
- Parity Observation

Approach:
- Count the number of even and odd values.
- Determine which parity is in the majority.
- Traverse the array again and print the index of the element
  with the opposite parity.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even > odd)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}