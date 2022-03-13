#include <bits/stdc++.h>
using namespace std;
// shift all negative element one side of array in left side
int  arrange(int arr[], int size)
{
      int j = 0;
    for (int i = 0; i < size; i++)
    { 
        if (arr[i] > 0)
        {
            if (i != j)
            {
                swap(arr[j], arr[i]);
            }
            j++;
        }
    }
    return j;
}

void AlternatingElement(int arr[],int size){
    int j=arrange(arr,size);
    int positiveIndex=0;
    int negativeIndex=j;
    while(negativeIndex<size && positiveIndex<negativeIndex && arr[negativeIndex]<0){
        swap(arr[positiveIndex],arr[negativeIndex]);
        positiveIndex=positiveIndex+2;
        negativeIndex=negativeIndex+1;
    }
}
int main()
{
    int arr[]={2,1,-3,-2,8,-4,5,6,7,-34,-23,-12};
    int size=12;
    arrange(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"***********************"<<endl;
    AlternatingElement(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}