def twoSum(nums,target):
    # for i in range(0,len(nums)):
    #     if(i==(len(nums)-1)):
    #         sum = (nums[i] + nums[0])
    #         if(sum==target):
    #             return (0,len(nums)-1)
            
        
    #     elif(i!=(len(nums)-1)):
    #         sum = (nums[i] + (nums[i+1]))
    #         if(sum==target):
    #             return (index,index+1)
    #         else:
    #             index += 1

    for i in range(0,len(nums)):
        for j in range(i+1,len(nums)):
            sum = nums[i]+nums[j]
            if(sum==target):
                return (i,j)
    return 0

nums1=[2,7,11,15]
nums2=[2,3,4]    
nums3=[3,2,3]
nums4=[-3,4,3,90]

print(len(nums1))

print(twoSum(nums1,18))
print(twoSum(nums2,7))
print(twoSum(nums3,6))
print(twoSum(nums4,0))
