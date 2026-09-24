/*
Problem      : A. Mishka and Game
Platform     : Codeforces
Problem ID   : 703A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Counting + Comparison

Important    : Teaches counting outcomes and comparing the final scores.

Approach     :
- Compare Mishka's and Chris's values in every round.
- Increment the winner's counter.
- Compare both counters after all rounds.
- Print the player with more wins, or friendship if they are equal.

Time Complexity  : O(n)
Space Complexity : O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int rounds;
    cin >> rounds;

    int Mishka = 0 , Chirs =0 ;

    while(rounds--){
        int a , b;
        cin >> a >> b;

        if(a < b) Chirs++;
        else if(a > b) Mishka++;    
    }

    if(Mishka < Chirs){
        cout << "Chris" << endl;
    }
    else if(Mishka > Chirs){
        cout << "Mishka" << endl;
    }
    else if(Mishka == Chirs){
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}