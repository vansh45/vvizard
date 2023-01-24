outputs = ([[1.00, 4.23, 5.77]])


print(f'output of function: {outputs}')


sum = 0
for x in outputs :
    for y in x :
        sum = sum+y
print(f'sum of outputs: {sum}')