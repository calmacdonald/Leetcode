class Solution(object):
    def removePalindromeSub(self, s):
        """
        :type s: str
        :rtype: int
        """
        if not s: return 0
        elif s == s[::-1]: return 1
        else: return 2