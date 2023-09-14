#!/usr/bin/python3

biggest_palindrome = 0

for x in range(100, 1000):
    for y in range(100, 1000):
        soln = x+ y
        if soln > biggest_palindrome and str(soln) == str(soln)[::-1]:
            biggest_palindrome = soln
with open("102-result", "w") as file:
    file.write(str(biggest_palindrome))
