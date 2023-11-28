class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        # "{()}()"

        stack = []
        
        #[{, [, ], }, (, )]
        # ")"

        for paren in s:
            if paren == "(" or paren == "{" or paren == "[":
                stack.append(paren)
            elif paren == ")" and len(stack) > 0:
                if stack.pop() != "(":
                    return False
            elif paren == "}" and len(stack) > 0:
                if stack.pop() != "{":
                    return False
            elif paren == "]" and len(stack) > 0:
                if stack.pop() != "[":
                    return False
            else:
                return False
        
        if len(stack) > 0:
            return False

        return True  
    
# https://leetcode.com/problems/valid-parentheses/