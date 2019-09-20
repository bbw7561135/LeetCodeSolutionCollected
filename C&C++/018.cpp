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


void FourSum(int* arr, int arrSize, int target)
{
    int i,j,left,right;
    for(i=0;i<arrSize-3;i++) //i is from 0 to arrSize-1 but the last 3 elements
                            //is uncessary for the search of i as the question is 4 elements sum
    {
        if(i>0 && arr[i-1]==arr[i]) //same method implemented in 018.py
            continue; //see comments here
        for(j=i+1;j<arrSize-2;j++)
        {
            if(j>i+1 && arr[j-1] == arr[j])
                continue;
            left = j+1;
            right = arrSize - 1;
            while(left<right) //while do as conditions satisfies while if only do once
            {
                if(arr[i]+arr[j]+arr[left]+arr[right]==target)
                {
                    cout<<"ans: "<<arr[i]<<'\t'<<arr[j]<<'\t'<<arr[left]<<'\t'<<arr[right]<<endl;
                    while(left<right && arr[left]==arr[left+1])
                    {
                        left = left + 1;
                    }
                    while(left<right && arr[right]==arr[right-1])
                    {
                        right = right -1;
                    }

                    left = left + 1;
                    right = right -1;
                }
                else if(arr[i]+arr[j]+arr[left]+arr[right]<target)
                    left = left + 1;
                else
                    right = right - 1;
            }
        }

    }
}


int main()
{
    int arr[6] = {1, 0, -1, 0, -2, 2};
    int arrSize = 0;
    int target = 0;
    arrSize = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,arrSize-1); //sort first then find the answer
    for(int i=0;i<arrSize;i++) //the index in QuciSort should be 0 and arrSize-1
        cout<<arr[i]<<endl;
    FourSum(arr,arrSize,target);
    return 0;

}

//output
//2
