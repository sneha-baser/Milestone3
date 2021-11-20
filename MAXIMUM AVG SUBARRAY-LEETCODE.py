class Solution:
    def findMaxAverage(self, nums, k):
        length=len(nums)
        summation=sum(nums[:k])
        maximum=summation
        x=0
        for i in range(k,length):
            summation=summation +nums[i]-nums[x]
            if(summation>maximum):
                maximum=summation
            x=x+1
        return maximum/float(k)