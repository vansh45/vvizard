def shift_zeros(nums):
    
    if(len(nums) == 0):
        return

    i =0
    for j in range(len(nums)):
        #  if nums[i] != 0:
        #      i+=1
         if nums[j] != 0:
            
            nums[i] , nums[j] = nums[j] , nums[i]
            i+=1
            
    return nums

u = [0,1,0,3,2,0,0,4,5,6,0,3,2]
v =[1,2,3,1]
print(shift_zeros(u))
