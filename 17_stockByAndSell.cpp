#include<bits/stdc++.h>
using namespace std;
void profit(int arr[],int size){
     int min = arr[0];
    int profite = 0;
    int n=size;
    int sell,buy;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }

        else if (profite < arr[i] - min)
        {
            profite = arr[i] - min;
            sell=arr[i];
            buy=min;
        }
    }
    printf("profit day of buy is = %d and day of sell is =%d  and proift is =%d",buy,sell,profite);
}
int main(){
    int arr[]={2,11,1,5,7};
    int size=5;
    profit(arr,size);

    return 0;
}