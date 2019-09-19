#include <iostream>
#include <cmath>
using namespace std;

void Swap(int arr[], int low, int high) //part of quick sort
{
    int temp;
    temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}

int Partition(int arr[], int low, int high) //part of quick sort
{
    int base = arr[low];
    while(low < high)
    {
        while(low < high && arr[high] >= base)
        {
            high --; //右侧比base大 通过 high-- 往中间移动一位
        }
        Swap(arr, low, high); //若右侧比base小 交换位置 
        while(low < high && arr[low] <= base)
        {
            low ++; //左侧比base小 正常 通过
        }
        Swap(arr, low, high);//左侧比base大 交换位置
    }
    return low;
}

void QuickSort(int* arr, int low, int high) //use as a black box
{
    if(low < high)
    {
        int base = Partition(arr, low, high); //快速排序本质是以base位置为准分为左右两边
        //左边小于base 右边大于base 用partition实现 然后递归调用直到只剩一个数
        //一轮后 形成以base所在位置为基准的左右两边 左边都小于arr[base] 右边都大于arr[base] 递归调用
        //手写个例子 就明白partition的过程
        QuickSort(arr, low, base - 1);
        QuickSort(arr, base + 1, high);
    }
}


void ThreeSum (int* arr, int arrSize)
{
    int sumof3;
    int i,j,k;
    for(i=0;i<arrSize;i++) //排序后从左至右第一个数
    {


        j=i+1;//第二个数
        k=arrSize-1;//倒数第一个数

        if(arr[i]>0)
        {
            cout << "no answer as the smallest element is > 0" << endl;
            break; //第一个数本身就最小 还比0大 后面的就都大于0 相加不可能为0 跳出并结束
        }

        if(i>0 && arr[i-1]==arr[i]) //这里表示i和i-1重复了 而i-1上一次已经算过 直接跳过
            continue;

        while(j<k) //区分while和if的差异！！！用if就错了
        {
            sumof3 = arr[i] + arr[j] + arr[k];
            if(sumof3==0)
            {
                cout << "answer is" << arr[i] <<'\t' << arr[j] << '\t' << arr[k] << endl;
                if(j<k && arr[j]==arr[j+1]) //j<k最好放着 以防j和k相邻的情况
                    j=j+1; //跳过重复答案
                if(j<k && arr[k]==arr[k-1])
                    k=k-1; //跳过重复答案

                j=j+1; //开始找下个解
                k=k-1;
            }
            else if(sumof3 < 0)
                j=j+1; //因为进来前已排序 所以3数和小于0的话 增大j可以增大sumof3 保持i不动的前提下
            else
                k=k-1; //大于0 可以减少k从而减少sumof3
        }

    }
}


int main()
{
    int arr[6] = {-1, 0, 1, 2, -1, -4};
    int arrSize = 0;
    arrSize = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,arrSize); //sort first then find the answer
    for(int i=0;i<arrSize;i++)
        cout<<arr[i]<<endl;
    ThreeSum(arr,arrSize);
    return 0;

}

//output
//-4
//-1
//-1
//0
//1
//2
//answer is-1     -1      2
//answer is-1     0       1
