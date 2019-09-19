class Solution011(object):
    def maxArea(self, height):
        i = 0 #最左边
        j = len(height) - 1 #最右边
        maxval = 0
        while i < j:
            maxval = max(maxval, min(height[i], height[j])*(j-i)) #找出最左边和最右边组成容器的容积
            if height[i] < height[j]: #短边不需要再考虑 因为此时只要选定短边 其他任选边的容积都不会大于maxval
                i += 1 #短边不用考虑 考虑下一块木板
            else:
                j -= 1 #短边不用考虑 考虑下一块木板
        return maxval
test011=Solution011()
nums011=[1,8,6,2,5,4,8,3,7]
test011.maxArea(nums011)
#output 49
