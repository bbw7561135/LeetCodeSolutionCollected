#include <iostream>

using namespace std;


int* twoSum(int* nums, int numsSize, int target) {//返回的是指针 指向整型数据
    int *a = (int*)malloc(2*sizeof(int)); 
    for(int i = 0;i<numsSize;i++)
    {
        for(int j = i+1;j<numsSize;j++)
        {//暴力求解法 遍历所有组合
            if(nums[i] + nums[j] == target)
            {
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;//返回指针a的信息实际上存到b里面
}

int main()
{
    int a[4] = {2,7,11,15}; //input array
    int b[2];
    int *p = b;//p指向一个整形数据
    int numsize,targrt=9; //target number
    numsize = sizeof(a)/sizeof(a[0]);//length of array
    p = twoSum(a,numsize,targrt); //把结果存到b里面 借由指针a
    cout<<*p<<" "<<*(p+1)<<endl;
}

//output 0 1
