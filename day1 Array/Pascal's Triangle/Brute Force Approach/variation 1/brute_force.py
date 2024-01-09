'''
Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle
'''

# nCr = n! / (r! * (n-r)!)


'''
We can separately calculate n!, r!, (n-r)! and using their values we can calculate nCr. 
This is an extremely naive way to calculate. The time complexity will be O(n)+O(r)+O(n-r).

'''