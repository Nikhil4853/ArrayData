#include <bits/stdc++.h>
using namespace std;
class rainWater
{
public:
     void waterRainProblem(int size, int arr[])
    {
        int left[size];
        int right[size];
        left[0] = arr[0];
        for (int i = 1; i < size; i++)
        {
            left[i] = Max(left[i - 1], arr[i]);
        }
        right[size - 1] = arr[size - 1];
        for (int i = size - 2; i >= 0; i--)
        {
            right[i] = Max(right[i + 1], arr[i]);
        }
        int ans=0;
        for(int i=0; i<size; i++){
            ans+=(Min(left[i],right[i])-arr[i]);
        }
        cout<<"trapping water is ="<<ans;
    }

private:
    int Max(int a, int b)
    {
        if (a >= b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    int Min(int a, int b)
    {
        if (a <= b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
int main()
{
    int arr[]={3,2,1,4,0,1,3,2};
    rainWater rw;
    rw.waterRainProblem(8,arr);
    cout<<max(4,5);
    return 0;
}