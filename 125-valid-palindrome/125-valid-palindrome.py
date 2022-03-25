class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if(len(s) == 0):
            return true
        
        s = s.lower().replace(' ', '')
        s = ''.join(ch for ch in s if ch.isalnum())
        res = True
        n = len(s)-1
        
        for i in range(0, n/2+1):
            if s[i] != s[n-i]:
                res = False
                break
        
        return res
        