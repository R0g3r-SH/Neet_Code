
def validPalidorme (str):
    ptrl = 0
    ptrr = len(str)-1

    while (ptrl >= ptrr):

        while not isalphaNumeric(str[ptrl]):
            l+=1
        
        while not isalphaNumeric(str[ptrr]):
            r-=1

        if str[ptrr] != str[ptrl]:
            return False
        
        ptrl += 1
        ptrr -=1
            

    
    return True





def isalphaNumeric (str):

    return (
        ord('A') < ord(str) < ord("Z") or
        ord("a") < ord(str) < ord("z") or
        ord('0') < ord(str) < ord('9')
    )



str = "A man, a plan, a canal: Panama"
print ( validPalidorme (str))