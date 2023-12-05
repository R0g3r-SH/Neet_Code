def is_alpha_numeric(str):

    return ( ord('a') <= ord(str) <= ord('z') or
        ord('A') <= ord(str) <= ord('Z') or
        ord('0') <= ord(str) <= ord('9'))

class Solution(object):

    def isPalindrome(self, s):
        ptrl = 0
        ptrr = len(s)-1

        while (ptrl < ptrr):
            
            while ptrl<ptrr and not is_alpha_numeric(s[ptrl]):
                ptrl+=1
            
            while ptrr>ptrl and not is_alpha_numeric(s[ptrr]):
                ptrr-=1

            
            if s[ptrr].lower() != s[ptrl].lower():
                return False

            ptrl +=1
            ptrr -=1

        return True
