#include <bits/stdc++.h>
using namespace std;
void maxProduct(int size, int arr[])
{
    long long max1 = 1;

    long result = 1;
    for (int i = 0; i < size; i++)
    {
        max1 = max1 * arr[i];
        if (max1 >= result)
        {
            result = max1;
        }
        if (max1 == 0)
        {
            max1 = 1;
        }
    }
    long result2 = 0;
    int max2 = 1;
    for (int i = size - 1; i >= 0; i--)
    {
        max2 = max2 * arr[i];
        if (max2 >= result)
        {
            result2 = max2;
        }
        if (max2 == 0)
        {
            max2 = 1;
        }
    }
    long ans = max(result2, result);
    cout << ans;
}
long max(long res1, long res2)
{
    if (res1 >= res2)
    {
        return res1;
    }
    else
    {
        return res2;
    }
}
int main()
{
    int arr[] = {-1, -2, -3};
    maxProduct(3, arr);
    return 0;
}