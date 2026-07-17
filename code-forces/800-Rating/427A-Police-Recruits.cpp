/*
Problem: 427A - Police Recruits
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Simulation

Pattern:
- Resource Tracking

Approach:
- Maintain the number of available police officers.
- If the event is positive, recruit that many officers.
- If the event is -1, assign one officer if available.
- Otherwise, count the crime as untreated.
- Print the total number of untreated crimes.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0;i<n;++i)
    cin >> arr[i];

    int police = 0;
    int count = 0;
    for(int i = 0;i<n;++i)
    {
        if(arr[i] == -1)
        {
            if(police == 0)
            count++;
            else
            police += arr[i];
        }
        else{
            police += arr[i];
        }
    }

    cout << count << endl;

    return 0;

}