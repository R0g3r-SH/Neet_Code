input = ["lint","code","love","you"]
output = ["lint","code","love","you"]


def encode (strs):
    #0(n)
    for i in range(len(strs)):
        num_char  =  str(len(strs[i]))
        special_char = '#'
        strs[i] = num_char + special_char + strs[i]

    return "".join(strs)


def is_start (val1 , val2):

    if (isinstance(int(val1),int) and  val2 == "#"):
        return True
    else :
        return False


def extractor (val1, val2, strs , idx,):

    formated_val1 = int(val1)
    out_str=""

    for i in range(idx+2, idx+2+formated_val1):
        out_str += strs[i]

    return [out_str,idx+2+formated_val1]
    

def decode (strs):

    ourput = []
    prt =  0 

    while prt <= len(strs)-1:

        curr_char = strs[prt]
        next_char = strs[prt+1]
        
        if is_start (curr_char,next_char):

            calling_extractor = extractor (curr_char,next_char ,strs , prt )
            extracted,idx = calling_extractor[0], calling_extractor[1]
            ourput.append(extracted)

            prt =  idx
    
    return ourput


def decodeNeetCode (str):

    res , i  = [] , 0

    while i < len(str):
        j=i

        while str[j] != "#":
            j+=1
            
        uo = str[i:j]
        length = int(str[i:j])
        res.append(str [j+1:j+1+length])
        i= j+1+length


    return res





encoded = encode(input)

print(encoded)

print (decodeNeetCode(encoded))