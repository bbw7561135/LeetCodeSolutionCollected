class Solution018(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        result = list()
        nums_len = len(nums)
        nums.sort()
        for i in range(nums_len - 3): #之前双指针法的拓展 之前固定一个i 这里固定i和j
            if i > 0 and nums[i - 1] == nums[i]: #雷同i 已经找过
                continue

            for j in range(i+1, nums_len - 2):
                if j > i + 1 and nums[j] == nums[j - 1]: #雷同j 已经找过
                    continue
                l, r = j + 1, nums_len - 1 #固定i j后 双指针 l和r开始跑
                while l < r:
                    if nums[i] + nums[j] + nums[l] + nums[r] == target:
                        result.append([nums[i], nums[j], nums[l], nums[r]])
                        while l < r and nums[l] == nums[l + 1]: #l<r 不可少 防止l r相邻
                            l += 1
                        while l < r and nums[r] == nums[r - 1]:
                            r -= 1
                        l += 1
                        r -= 1
                    elif nums[i] + nums[j] + nums[l] + nums[r] < target:
                        l += 1
                    else:
                        r -= 1 
        return result


test018=Solution018()
nums018=[1, 0, -1, 0, -2, 2]
target=0
test018.fourSum(nums018,target)
#output [[-2, -1, 1, 2], [-2, 0, 0, 2], [-1, 0, 0, 1]]
