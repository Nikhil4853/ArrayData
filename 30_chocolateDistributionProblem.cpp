#include<bits/stdc++.h>
using namespace std;
// Time O(nlogn)
void chocolaate(int arr[], int size, int student ){
    int max=INT_MAX;
    int i=0;
    int j=i+student-1;
    // sort array
    sort(arr, arr+size);
    while (i<size-student+1 && j<size)
    {
        if((arr[j]-arr[i]<max )){
            max=arr[j]-arr[i];
        }
        i++;
        j++;
    }
cout<<max;

}

int main(){
    int arr[]={56,3,12,8,9,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    chocolaate(arr,size,3);
    return 0;
}