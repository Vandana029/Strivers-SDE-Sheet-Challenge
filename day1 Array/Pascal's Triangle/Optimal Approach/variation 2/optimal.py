''' 
Given the row number n. Print the n-th row of Pascal’s triangle.
'''

# Current element = prevElement * (rowNumber - colIndex) / colIndex


def pascalTriangle(n):
    ans = 1
    print(ans, end=" ") # printing 1st element

    #Printing the rest of the part:
    for i in range(1, n):
        ans = ans * (n - i)
        ans = ans // i
        print(ans, end=" ")
    print()

if __name__ == "__main__":
    n = 5
    pascalTriangle(n)
