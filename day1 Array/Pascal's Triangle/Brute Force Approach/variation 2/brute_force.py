''' 
Given the row number n. Print the n-th row of Pascal’s triangle.
'''

'''
Time Complexity: O(n*r), where n is the given row number, and r is the column index which can vary from 0 to n-1.
Reason: We are calculating the element for each column. Now, there are total n columns, and for each column, the calculation of the element takes O(r) time where r is the column index.

Space Complexity: O(1) as we are not using any extra space.

'''

import math

def nCr(n, r):
    res = 1
    # calculating nCr:
    for i in range(r):
        res = res * (n - i)
        res = res // (i + 1)
    return res

def pascalTriangle(n):
    # printing the entire row n:
    for c in range(1, n+1):
        print(nCr(n-1, c-1), end=" ")
    print()

if __name__ == "__main__":
    n = 5
    pascalTriangle(n)
    