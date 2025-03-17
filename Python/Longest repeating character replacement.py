class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        freqs = defaultdict(int)
        res = 0
        i = 0

        for j in range(len(s)):
            freqs[s[j]] += 1
            maxFreq = max(freqs.values())
            curLen = j - i + 1
            if curLen - maxFreq > k:
                freqs[s[i]] -= 1
                i += 1
            res = max(res, j - i + 1)
        
        return res