#include<bits/stdc++.h>
using namespace std;
long merge(long arr[],long temp[],long start,long mid,long end){
    long count=0;
    long i,j,k;
    i=start;
    j=mid;
    k=start;
    while((i<=mid-1)&&(j<=end)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count+=(mid-i);
        }
    }

    //insert remening element of right side array 
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }

    //insert remening element of left side array
    while (j<=end)
    {
        temp[k++]=arr[j];
    }
    for(int n=start;n<=end;n++){
        arr[n]=temp[n];
    }
return count;
}
long MergeInversion(long arr[],long temp[],long start, long end){
    long mid;
    long count=0;
    if(start<end){
    mid=(start+end)/2;
    // right side  of the mid of array...............
    count+=MergeInversion(arr,temp,start,mid);
    //left side of the mid of the array..................
    count+=MergeInversion(arr,temp,mid+1,end);
    // merge both two array right side and left side in new temp array
    count+=merge(arr,temp,start,mid+1,end);
    }
    return count;
}

int main (){
    long arr[]={8,6,5,3,2,1};
    int size=6;
    long temp[size];
    long p= MergeInversion(arr,temp,0,size-1); 
    cout<<p;
    return 0;
}