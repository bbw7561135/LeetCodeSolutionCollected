#include <iostream>
#include <cmath>
using namespace std;



#include <iostream>

using namespace std;


int maxArea(int* nums, int numsSize) {
    int maxa = 0;
    int i=0,j=0;
    j=numsSize-1;//最右边
    while(i<j)
    {
        maxa = max(maxa,min(nums[i],nums[j])*(j-i)); //找出最左边和最右边组成容器的容积
        if(nums[i]<nums[j]) //短边不需要再考虑 因为此时只要选定短边 其他任选边的容积都不会大于maxval
            i=i+1;
        else          //短边不用考虑 考虑下一块木板 往中间移动
            j=j-1;
    }
    return maxa;
}

int main()
{
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    int maxarea = 0;
    int arrSize = 0;
    arrSize = sizeof(arr)/sizeof(arr[0]);
    maxarea = maxArea(arr,arrSize);
    cout << maxarea << endl;
}

//output
//49
