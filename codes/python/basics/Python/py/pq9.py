def elementwise_greater_than(L, thresh):
    """Return a list with the same length as L, where the value at index i is 
    True if L[i] is greater than thresh, and False otherwise.
    
    >>> elementwise_greater_than([1, 2, 3, 4], 2)
    [False, False, True, True]
    """
    R=[]
   
      
            
    return [l>thresh for l in L]


print(elementwise_greater_than([2,9,3,5,6,8],5))