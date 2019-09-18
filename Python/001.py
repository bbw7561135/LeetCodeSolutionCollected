class Solution001(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        lookup = {} #dict
        for i, num in enumerate(nums): #i is index while num is the element
            if target - num in lookup: 
                return [lookup[target - num],i]
            lookup[num] = i #字典和num数组里面下标和元素的对应关系刚好相反
        return []

test_nums=[2,7,11,15]
targ=9
test=Solution001()
test.twoSum(test_nums,targ)

#output
[0, 1]
