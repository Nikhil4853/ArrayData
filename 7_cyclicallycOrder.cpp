#include<bits/stdc++.h>
using namespace std;
class cyclicallycOrder{
public:
void clockDirection(int arr[],int size){
    int temp=arr[size];
    for (int i = size; i > 0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
};
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cyclicallycOrder co;
    co.clockDirection(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}