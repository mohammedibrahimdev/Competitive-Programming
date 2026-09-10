/*
Problem      : A. Design Tutorial: Learn from Math
Platform     : Codeforces
Problem ID   : 472A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Brute Force + Factor Counting

Important    : Teaches identifying composite numbers and finding two valid numbers whose sum equals `n`.

Approach     :
- Try pairs of numbers `i` and `j`.
- Check whether `i + j == n`.
- Count the factors of both numbers.
- If both have more than 2 factors, they are composite.
- Print the valid pair.

Time Complexity  : O(n^3)
Space Complexity : O(1)
*/

#include<iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    for(int i = 4;i<number;++i){

        for(int j = 4;j<number;++j){

            if((i + j) == number){
                
                int factori = 0;
                int factorj = 0;

                // factor for i number
                for(int k = 1;k<=i;++k){
                    if(i%k == 0){
                        factori++;
                    }
                }

                for(int k = 1;k<=i;++k){
                    if(j%k == 0){
                        factorj++;
                    }
                }

                if(factori > 2 && factorj > 2){
                    cout << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }
    
    return 0;
    
}