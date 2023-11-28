class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """

        #index = 0
        #for i in range(len(nums)):
            #if nums[i] != val:
                #nums[index] = nums[i]
                #index += 1

        #return index

        i = 0
        while i < len(nums):
            if nums[i] == val:
                nums.pop(i)
            else:
                i += 1
        return len(nums)
    
# https://leetcode.com/problems/remove-element/description/