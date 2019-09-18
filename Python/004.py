class Solution004(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        
        res = nums1 + nums2
        #对合并的数组排序
        res.sort()
        #检测合并的数组中共有奇数个数字还是偶数个数字
        n = len(res)//2
        #如果是奇数
        if len(res)%2 ==1:
            return res[n] 
        #如果是偶数
        else:
            return (res[n]+res[n-1])/2



nums1=[1,2]
nums2=[3,4]
test04=Solution004()
test04.findMedianSortedArrays(nums1,nums2)

#output 2.5
