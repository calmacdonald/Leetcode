class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        words = s.split()
        ans = [None] * len(words)
        for word in words:
            ans[int(word[-1]) - 1] = word[: -1]
        return ' '.join(ans)