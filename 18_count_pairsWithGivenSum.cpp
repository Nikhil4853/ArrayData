#include <bits/stdc++.h>
using namespace std;
// first approch
/* void countPairs(int arr[],int size,int sum){
int count=0;
    for(int i=0; i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])==sum){
                count=count+1;
            }
        }

    }
    cout<<count;

  
}*/

//Second approch
int find_sumPair(int arr[], int n, int K)
{
    //sort(arr[0], arr[n - 1]);
    int i = 0;
    int j = n - 1;
    int count = 1;
    bool element = false;
    while (i < j)
    {
        if (arr[i] + arr[j] == K)
        {
            ++count;
            element = true;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < K)
        {
            i = i + 1;
        }
        else
        {
            j = j - 1;
        }
    }
    if (element)
    {
        cout << " count is = " << count;
    }
    return -1;
}

int main()
{
    int arr[] = {5, 4, 2, 1, 1,1};
    int size = 6;

    // first approch
    //countPairs(arr,size,6);

    // second approch
  find_sumPair(arr, size, 6);

    return 0;
}