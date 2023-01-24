
def percentage_liked(ratings):
    list_liked = [i>=4 for i in ratings]
    # TODO: Complete the function
    percentage_liked = len(list_liked)/len(ratings)
    return list_liked


print(sum(percentage_liked([1, 2, 3, 4, 5, 4, 5, 1])))


