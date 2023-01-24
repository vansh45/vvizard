
def percentage_liked(ratings):
    list_liked = [i>=4 for i in ratings]
    # TODO: Complete the function
    percentage_liked = len(list_liked)/len(ratings)
    return list_liked

# Do not change: should return 0.5
print(sum(percentage_liked([1, 2, 3, 4, 5, 4, 5, 1])))

# Do not change: Check your answer
