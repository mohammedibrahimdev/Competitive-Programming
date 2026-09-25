/*
Problem      : A. Spell Check
Platform     : Codeforces
Problem ID   : 1722A
Rating       : 800

Topic        : Math, Implementation

Pattern      : Set + Character Frequency

Important    : Teaches checking whether a string contains exactly the required distinct characters.

Approach     :
- Store the required characters `T, i, m, u, r` in a set.
- Insert all characters of the given string into another set.
- The answer is `YES` only if `n == 5` and both sets are equal.

Time Complexity  : O(n log n)
Space Complexity : O(n)
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> st;
        set<char> target = {'T', 'i', 'm', 'u', 'r'};

        for (char ch : s) {
            st.insert(ch);
        }

        if (n == 5 && st == target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}