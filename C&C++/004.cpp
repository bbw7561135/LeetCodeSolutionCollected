#include <iostream>

using namespace std;



double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums[10000],numsSize=nums1Size+nums2Size;
    int i=0,j=0,k=0;

    //进行数组的有序合并 由小到大
    for(i=0;j<nums1Size&&k<nums2Size;i++){
        if(nums1[j]>nums2[k]) nums[i]=nums2[k++]; //赋值后k=k+1
        else nums[i]=nums1[j++];//赋值后j=j+1
    } //这个for结束后 j和k势必有一个等于nums1size 也就是有个数组已经被遍历完
//虽然数组是0到nums1size-1 但是考虑到++符号 所以for循环结束后 变成nums1size
    //合并剩余的部分
    while(j<nums1Size) nums[i++]=nums1[j++];
    while(k<nums2Size) nums[i++]=nums2[k++];
    //合并完成
    /*注意这个地方必须除以2.0，因为定义的是整形，只有这样才可以保证转化成double*/
    if(numsSize%2==0) return (nums[numsSize/2]+nums[numsSize/2-1])/2.0;
    else return nums[numsSize/2];//画个具体简例的示意图便知下标为何是如此
}


int main()
{
    int a[2] = {1,2};
    int b[2] = {3,4};
    int a_size = sizeof(a)/sizeof(a[0]);
    int b_size = sizeof(b)/sizeof(b[0]);
    double median_num=0.0;
    median_num = findMedianSortedArrays(a,a_size,b,b_size);
    cout<<median_num<<endl;

}

//output
//2.5
