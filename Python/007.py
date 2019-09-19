class Solution007(object):
    def reverse(self, x) :
        if x>=0:
            x = int(str(x)[::-1]) #先转换为str再翻转过来 再转为整数即可
        else:
            x = -int(str(-x)[::-1])
        if x < 2147483647 and x >= -2147483648: #in the range of [-2^31,2^31-1]
            return x
        else:
            return 0
 
 
test07=Solution007()
test07.reverse(321)
#output 321
