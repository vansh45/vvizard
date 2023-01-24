def skip_elements(elements):
	# code goes here
    newlist =[]
    for count,element in  enumerate(elements):
        
        if count%2==0:
            newlist.append(element)
        
       
    return newlist

print(skip_elements(["a", "b", "c", "d", "e", "f", "g"])) # Should be ['a', 'c', 'e', 'g']
print(skip_elements(['Orange', 'Pineapple', 'Strawberry', 'Kiwi', 'Peach'])) # Should be ['Orange', 'Strawberry', 'Peach']