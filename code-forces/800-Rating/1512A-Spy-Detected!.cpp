/*
Problem: 1512A - Spy Detected!
Platform: Codeforces
Rating: 800

Topic:
- Arrays
- Implementation

Pattern:
- Majority Element Detection

Important:
- Teaches identifying the unique element when all other elements are equal.

Approach:
- Use the first three elements to determine thethe common value.
- Traverse the array.
- Find the element different from the common value.
- Print its 1-based index.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<vector>
#include<iostream>

int main ()
{
    int loop;
    std:: cin >> loop;

    while(loop--)
    {
        int n;
        std:: cin >> n;

        std:: vector<int> arr(n);
        for(int i = 0;i<n;++i){
            std::cin >> arr[i];
        }

        int common = 0;
        if(arr[0] == arr[1])
            common = arr[0];
        else if(arr[0] == arr[2])
            common = arr[0];
        else
            common = arr[1];
        
        for(int i = 0;i<n;++i)
        {
            if(common != arr[i])
            {
                std:: cout << i + 1 << std :: endl;
            }
        }
        
    }

    return 0;
    
}