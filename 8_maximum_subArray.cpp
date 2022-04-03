#include <bits/stdc++.h>
using namespace std;
class maximum
{
public:
    int Max(int a, int b)
    {
        if (a > b)
        {

            return a;
        }
        else
        {

            return b;
        }
    }
    void Maximum(int arr[], int size)
    {
        int max = arr[0];
        int min = arr[0];
        for (int i = 1; i < size; i++)
        {
            min = Max(arr[i], (arr[i] + min));
            max = Max(max, min);
        }
        cout << "Maximum sum of sub array is " << max;
    }
};
int main()
{
    int arr[] = {-8, -1};
    int size = 2;
    maximum m;
    m.Maximum(arr, size);
    return 0;
}