Problem : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Solution: iterating  through each combination  to find the required solve.

Code:
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)): 
                if nums[i] + nums[j] == target:
                    return [i, j] 
        return []  
 
