class Solution(object):
    def checkAlmostEquivalent(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: bool
        """
        for i in range(len(word1)):
            a=word1.count(word1[i])
            b=word2.count(word1[i])
            if(abs(a-b)>3):
                return(False)
            
        for i in range(len(word2)):
            a=word2.count(word2[i])
            b=word1.count(word2[i])
            if(abs(a-b)>3):
                return(False)
        
        return(True)