class Solution016(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort() #先排序
        res = nums[0] + nums[1] + nums[2] #最初的三数和 也是最小的
        if(res>target): #最小三个数加起来都比目标大 后面的只会更大
            return res
        for i, num in enumerate(nums):
            left, right = i + 1, len(nums) - 1
            
            while left < right:
                s = num + nums[left] + nums[right] #双指针法
                # print s, res, abs(s - target), abs(res - target)
                if abs(s - target) < abs(res - target):
                    res = s #找到差距更小的组合 替换为res
                if s == target:
                    return s #恰好满足 返回
                elif s < target:
                    left += 1 #比目标小 那就左边+1
                else:
                    right -= 1 #比目标大 那就右边减小 雷同之前的问题15
        return res


test016=Solution016()
nums016=[-1,2,1,-4]
target=1
test016.threeSumClosest(nums016,target)
#output 2 (-1+2+1=2)
