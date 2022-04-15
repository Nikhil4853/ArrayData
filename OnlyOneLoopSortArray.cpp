#include<bits/stdc++.h>
using namespace std;
// time O(n)
// space o(1)
void sortArray(int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i]>=arr[i+1]){
            swap(arr[i],arr[i+1]);
            i=-1;
        }
    }
};
int main(){
    int arr[]={9,2,99,7,55,8};
    sortArray(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}