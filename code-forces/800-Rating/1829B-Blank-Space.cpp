/*
Problem: 1829B - Blank Space
Platform: Codeforces
Rating: 800

Topic:
- Arrays
- Implementation

Pattern:
- Consecutive Counting

Important:
- Teaches tracking the longest consecutive sequence while traversing an array.

Approach:
- Traverse the array once.
- Count consecutive zeros.
- Reset the count when a 1 is encountered.
- Keep updating the maximum consecutive zeros.
- Print the maximum count.

Time Complexity: O(n)
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
        int n;
        cin >> n;

        int count1 = 0, maincount = 0;
        
        while(n--)
        {
            int b;
            cin >> b;
			
            if(b == 0){count1++;}
            else if(b == 1){
                if(count1 > maincount){maincount = count1;}
                count1 = 0;
            }
        }
        cout << max(maincount, count1) << endl;
    }

    return 0;
}