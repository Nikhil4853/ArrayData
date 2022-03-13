#include <bits/stdc++.h>
using namespace std;
bool findSum(int size, int k, int arr[])
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        int j = i + 1;
        int r = size - 1;
        while (j < r)
        {
            int sum = arr[i] + arr[j] + arr[r];
            if (sum == k)
            {
                return true;
            }
            else if (sum < k)
            {
                j++;
            }
            else
            {
                r--;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {23, 3, 5, 8, 1, 6};
    int size = 6;
    cout << findSum(size,9, arr);
    return 0;
}