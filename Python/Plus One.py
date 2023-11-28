class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        if digits[-1] == 9:
            tempstr = ''
            tempnums = []

            #convert to str to join all nums together in one
            for num in digits:
                tempstr += str(num)
            print(tempstr)
            #add 1 as an int so computer can carry the 1
            summ = int(tempstr) + 1
            print(summ)
            #convert back to int and set each index of digits to the new numbers
            for dig in str(summ):
                print(dig)
                tempnums.append(int(dig))
            digits = tempnums
            print(digits)
            return digits
        
        else:
            digits[-1]+=1
            return digits
        
# https://leetcode.com/problems/plus-one/