def longestConsecutive(self, nums):
    set_nums  = set(nums)
    longest = 0 

    for n in nums :
        if (n-1 not in set_nums):
            length= 0
            while (n+length in set_nums):
                  length+=1
            
            longest = max(longest ,length)
        
    return longest