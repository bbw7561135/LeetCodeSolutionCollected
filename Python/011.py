class Solution011(object):
    def maxArea(self, height):
        i = 0
        j = len(height) - 1
        maxval = 0
        while i < j:
            maxval = max(maxval, min(height[i], height[j])*(j-i))
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
        return maxval
test011=Solution011()
nums011=[1,8,6,2,5,4,8,3,7]
test011.maxArea(nums011)
#output 49
