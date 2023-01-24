def shift_zeros(nums):
    j = 0
    for i in range(len(nums)):
        if nums[i] != 0:
            nums[i], nums[j] = nums[j], nums[i]
            j += 1
    for i in range(j, len(nums)):
        nums[i] = 0
    return nums

u = [0,0,0,1,0,3,2,0,0,4,5,6,0,3,2]
v =[1,2,3,1]
print(shift_zeros(u))