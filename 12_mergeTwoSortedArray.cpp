#include <bits/stdc++.h>
using namespace std;
class sort
{
public:
    void insertionSort(int arr[], int size)
    {
        for (int i = 1; i < size; i++)
        {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
    }
};
class printArray{
public:
void PrintArray(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;
    }
}
};
class MergeTowSortedArray:sort,printArray
{
public:
    void MergeArray(int arr1[], int Size1, int arr2[], int Size2)
    {
        for (int i = Size1-1, j = 0; i >= 0 && j < Size2; i--, j++)
        {
            if (arr1[i] > arr2[j])
            {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
            }
        }
        // sort array_1
        insertionSort(arr1,Size1);
        // sort array_2
        insertionSort(arr2,Size2);
        // pirnt arr1 && arr2
        PrintArray(arr1,Size1);
        PrintArray(arr2,Size2);
    }
};
int main()
{
    int arr1[]={0,2,4,6,8};
    int size1=5;
    int arr2[]={1,3,5,7,9};
    int size2=5;
    MergeTowSortedArray mTSA;
    mTSA.MergeArray(arr1,size1,arr2,size2);
    return 0;
}