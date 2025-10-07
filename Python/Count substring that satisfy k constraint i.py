class Solution(object):
    def countKConstraintSubstrings(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        res = l = 0
        counts = [0, 0]
        for r, c in enumerate(s):
            counts[c == '1'] += 1
            while counts[0] > k and counts[1] > k:
                counts[s[l] == '1'] -= 1
                l += 1
            res += (r - l + 1)
        return res