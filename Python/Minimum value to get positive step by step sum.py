class Solution(object):
    def minStartValue(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        Sum, ans = 0, 0
        for el in nums:
            Sum = Sum + el
            ans = min(ans, Sum)
        return -ans + 1