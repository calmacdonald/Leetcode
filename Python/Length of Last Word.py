class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        words = s.split()
        print(len(words[-1]))

# https://leetcode.com/problems/length-of-last-word/