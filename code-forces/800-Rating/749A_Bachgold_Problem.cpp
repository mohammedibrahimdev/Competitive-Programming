/*
Problem      : A. Arpa’s hard exam and Mehrdad’s naive cheating
Platform     : Codeforces
Problem ID   : 749A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Greedy + Prime Numbers

Important    : Teaches maximizing the number of prime numbers by using as many `2`s as possible.

Approach     :
- If `n` is even, represent it using only `2`s.
- If `n` is odd, use one `3` first, then use `2`s for the remaining value.
- Store and print the prime numbers used.

Time Complexity  : O(n)
Space Complexity : O(n)
*/

#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    int nums_of_primes = 0;
    vector<int> arr_of_primes;
    
    if(n%2 == 0){

        while(n>0){
            n -= 2;
            nums_of_primes++;
            arr_of_primes.push_back(2);   
        }
    }
    else{
        n -= 3;
        nums_of_primes++;
        arr_of_primes.push_back(3);
        while(n>0){
            n -= 2;
            nums_of_primes++;
            arr_of_primes.push_back(2);
        }
    }

    cout << nums_of_primes << endl;
    for(int number : arr_of_primes){
        cout << number << " " ;
    }

    return 0;
}