#!/usr/bin/python3
def ispalindrome(n):
    s = str(n)
    return s == s[::-1]


li = []
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        if ispalindrome(i * j):
            li.append(i * j)
print(max(li))
