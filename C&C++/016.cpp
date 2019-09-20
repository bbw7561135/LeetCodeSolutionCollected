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
            high --;
        }
        Swap(arr, low, high);
        while(low < high && arr[low] <= base)
        {
            low ++;
        }
        Swap(arr, low, high);
    }
    return low;
}

void QuickSort(int* arr, int low, int high) //use as a black box
{
    if(low < high)
    {
        int base = Partition(arr, low, high);
        QuickSort(arr, low, base - 1);
        QuickSort(arr, base + 1, high);
    }
}


int ThreeSumClosest(int* arr, int arrSize, int target)
{
    int sumof3;
    int newsum;
    int i,j,k;
    sumof3 = arr[0]+arr[1]+arr[2];
    if(sumof3>target)
    {
        return sumof3;
    }
    for(i=0;i<arrSize;i++)
    {
        j=i+1,
        k=arrSize-1;
        while(j<k)
        {
            newsum = arr[i] + arr[j] + arr[k];
            if(abs(newsum-target)<abs(sumof3-target))
                sumof3 = newsum;
            if(newsum==target)
                return newsum; //和python版的算法一致
            else if(newsum<target)
                j=j+1;
            else
                k=k-1;
        }

    }
    return sumof3;
}


int main()
{
    int arr[4] = {-1,2, 1, 4};
    int arrSize = 0;
    int target = 1;
    int closest_res = 99;
    arrSize = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,arrSize); //sort first then find the answer
    //for(int i=0;i<arrSize;i++)
        //cout<<arr[i]<<endl;
    closest_res = ThreeSumClosest(arr,arrSize,target);
    cout << closest_res << endl;
    return 0;

}

//output
//2
