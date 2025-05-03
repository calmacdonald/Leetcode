class Solution(object):
    def findTheLongestBalancedSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        temp = '01'
        while temp in s:
            temp = '0' + temp + '1'
        return len(temp) - 2