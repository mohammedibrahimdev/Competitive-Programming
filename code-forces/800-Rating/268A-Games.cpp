/*
Problem: 268A - Games
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Brute Force

Pattern:
- Nested Loops (Pair Comparison)

Approach:
- Store each team's home and away uniform colors as a pair.
- Compare every team's home color with every other team's away color.
- If the colors match, increment the count.
- Print the total number of matches where the home team changes its uniform.

Time Complexity: O(n²)
Space Complexity: O(n)
*/
#include<utility>
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int n, count = 0;
    cin >> n;
    int len = n * 2;
    vector<pair<int , int>> teams(n);

    for(int i = 0;i<n;++i)
    cin >> teams[i].first >> teams[i].second;

    for(int i = 0;i<n;++i)
    {
        for(int j = 0;j<n;++j)
        {
            if(teams[i].first == teams[j].second)
            count++;
        }
    }

    cout << count << endl;

    return 0;
    
}