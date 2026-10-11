#include<iostream>
using namespace std;
int main ()
{
    int n;
    pair<string, int> team1 = {"" , 0};
    pair<string, int> team2 = {"" , 0};

    while (n--)
    {
        string goal;
        cin >> goal;

        if(team1.first == ""){
            team1.first = goal;
            team1.second++;
        }
        else if(goal == team1.first){
            team1.second++;
        }
        else if(team2.first == ""){
            team2.first = goal;
            team2.second++;
        }
        else {
            team2.second ++;
        }
    }

    if(team1.second> team2.second){
        cout << team1.first << endl;
    }
    else{
        cout << team2.first << endl;
    }
    

    return 0;
}