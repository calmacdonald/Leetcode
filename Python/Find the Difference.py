class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        if len(s) == 0:
            return t
        else:
            for letter in t:
                if s.count(letter) != t.count(letter):
                    return letter
    
# https://leetcode.com/problems/find-the-difference/