class Solution(object):
    def maxRepeating(self, sequence, word):
        """
        :type sequence: str
        :type word: str
        :rtype: int
        """
        temp, res = word, 0
        while temp in sequence:
            res += 1
            temp += word
        return res