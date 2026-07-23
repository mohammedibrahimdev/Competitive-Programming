/*
Problem: 1676A - Lucky?
Platform: Codeforces
Rating: 800

Topic:
- Implementation
- Strings

Important:
- Teaches splitting a string into two parts and processing each independently.

Approach:
- Read the 6-digit ticket number as a string.
- Compute the sum of the first three digits and the last three digits.
- If both sums are equal, print "YES"; otherwise, print "NO".

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main ()
{
    int loop;
    cin >> loop;
    while(loop--)
    {
    	int sum1 = 0, sum2  = 0;
        string arr;
        cin >> arr;

        for(int i = 0;i<(arr.size())/2;++i)
        {
        	sum1 += arr[i];
        	sum2 += arr[(arr.size() - 1) - i];
		}
		
		if(sum2 == sum1)
		cout << "YES" << endl;
		else 
		cout << "NO" << endl;
    }
    
    return 0;
}