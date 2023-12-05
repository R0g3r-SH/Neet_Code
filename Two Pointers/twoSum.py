def twoSum(self, numbers, target):
        l = 0
        r = len(numbers)-1
        

        while l<r :
            cursum =  numbers[l] + numbers[r]
            if (cursum == target):
                return [l+1,r+1]

            if (cursum > target):
                r-=1
            else:
                l+=1

        return [-1,-1]