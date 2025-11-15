class Solution(object):
    def scoreBalance(self, s):
        """
        :type s: str
        :rtype: bool
        """
        total = sum(ord(c) - ord('a') + 1 for c in s)
        prefix = 0
        for c in s:
            prefix += ord(c) - ord('a') + 1
            if 2 * prefix == total:
                return True
        return False