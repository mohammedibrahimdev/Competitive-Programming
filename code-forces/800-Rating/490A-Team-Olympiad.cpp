/*
Problem      : A. Team Olympiad
Platform     : Codeforces
Problem ID   : 490A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Grouping + Minimum Frequency

Important    : Teaches grouping elements by type and finding the maximum number of complete teams.

Approach     :
- Store the positions of students belonging to teams `1`, `2`, and `3`.
- The number of complete teams is the minimum size among the three groups.
- Use the stored positions to form each team.

Time Complexity  : O(n)
Space Complexity : O(n)
*/

#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    vector<int> ones , twos , threes;

    for(int i = 1;i<=n;++i){

        int number;
        cin >> number;

        if(number == 1)
        ones.push_back(i);
        else if(number == 2)
        twos.push_back(i);
        else 
        threes.push_back(i);
    }


    int teams = min(
        {ones.size(), twos.size(), threes.size()}
    );

    cout << teams << endl;

    for(int i = 0;i<teams;++i){

        cout << ones[i] << " " << twos[i] << " " << threes[i] << endl; 
    }

    return 0;

}