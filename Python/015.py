class Solution015(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        
        """
        #建立一个空的结果list
        res_list = []
        #对数组排序
        nums.sort()
        #对第一个指针遍历
        for i in range(len(nums)):
            #第二个指针
            j = i + 1
            #第三个指针
            k = len(nums)- 1
            #第一个最小的数都大于0了，后面就不用求了
            if nums[i] > 0:
                break
            if i > 0 and nums[i-1] == nums[i]:
                continue
            #相等的数的符合条件的解在前一个值上已经被求过了
            #往中间夹逼
            while j < k:
                #如果刚好符合条件？
                ans = nums[i] + nums[j] + nums[k]
                if ans == 0:
                    #跳过相同的数
                    res_list.append([nums[i], nums[j], nums[k]])
                    while j < k and nums[j] == nums[j+1]:
                        j += 1
                    while j < k and nums[k] == nums[k-1]:
                        k -= 1
                    #最终都要指向下一个
                    k -= 1
                    j += 1
                #因为数组的有序性，所以我们面对小于Target的情况，应该增大我们目前的值，所以加大j
                elif ans < 0:
                    j += 1
                #同理 大于target时 应该减小k
                else:
                    k -= 1
        return res_list
        
test015=Solution015()
nums015=[-1, 0, 1, 2, -1, -4]
ans015=[]
ans015=test015.threeSum(nums015)
#output [[-1, -1, 2], [-1, 0, 1]]
