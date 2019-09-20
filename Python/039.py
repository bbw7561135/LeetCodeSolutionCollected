class Solution039(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort() #先排序
        #储存结果
        Solution039.anslist = [] #类变量 所有实例共有
        self.DFS(candidates, target, 0, [])
        return Solution039.anslist
 
    def DFS(self, candidates, target, start, valuelist):
        if target ==  0:
            return Solution039.anslist.append(valuelist)
        for i in range(start, len(candidates)):
            #注意在我们的递归函数中，target是不断在变化的
            #因为每次我们调用递归都要用target减去candidates[i],所以这时候如果不保证target比较大，这一定不符合我们的要求
            if candidates[i] > target:
                return
            #递归时我们的减少的条件是target，每次它都会减少
            #如何做到题目说的一个数字可以多次取呢？
            #我们设置了一个start，它会保存上一次取的i,这一次可以继续取，如果符合条件的话
            self.DFS(candidates, target-candidates[i], i, valuelist+[candidates[i]])#递归调用 可以画图纸思考具体过程


test039=Solution039()
nums039=[2,3,5]
target=8
test039.combinationSum(nums039,target)
#output [[2, 2, 2, 2], [2, 3, 3], [3, 5]]
#用C++得用到复杂的数据结构 还是用Python方便
