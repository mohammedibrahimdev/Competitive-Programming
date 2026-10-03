"""
Problem      : A. Do Not Be a Subsequence
Platform     : Codeforces
Problem ID   : 1520A
Rating       : 800

Topic        : Strings, Implementation

Pattern      : Set + Consecutive Character Check

Important    : Teaches detecting repeated characters that are not consecutive.

Approach     :
- Keep track of characters already seen using a set.
- Ignore consecutive repetitions of the same character.
- If a character appears again after a different character, print "NO".
- Otherwise, print "YES".

Time Complexity  : O(n)
Space Complexity : O(n)
"""

testcase = int(input())

for _ in range(testcase):
    size = int(input())
    arr = input()

    seen = set()
    previoue = ''

    istrue = True

    for ch in arr:
        if ch != previoue:
            if ch in seen:
                istrue = False
                break
            seen.add(ch)
            previoue = ch
    if istrue:
        print("YES")
    else:
        print("NO")