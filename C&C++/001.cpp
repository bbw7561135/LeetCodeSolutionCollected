#include <iostream>

using namespace std;


int* twoSum(int* nums, int numsSize, int target) {
    int *a = (int*)malloc(2*sizeof(int));
    for(int i = 0;i<numsSize;i++)
    {
        for(int j = i+1;(j<numsSize && j != i);j++)
        {
            if(nums[i] + nums[j] == target)
            {
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;
}

int main()
{
    int a[4] = {2,7,11,15}; //input array
    int b[2];
    int *p = b;
    int numsize,targrt=9; //target number
    numsize = sizeof(a)/sizeof(a[0]);//length of array
    p = twoSum(a,numsize,targrt);
    cout<<*p<<" "<<*(p+1)<<endl;
}

//output 0 1
