# less memory complexity

def shift_zeros(nums):
    
    non_zeros = [i for i in nums if i != 0]
    zeros = [i for i in nums if i == 0]

    zeros_to_insert = [0] * len(zeros)

    nums[:] = non_zeros + zeros_to_insert
    return nums

u = [0,1,0,3,2,0,0,4,5,6,0,3,2]
v =[1,2,3,1]
print(shift_zeros(v))