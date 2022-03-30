#include <bits/stdc++.h>
using namespace std;
class elementAppear
{
public:
// time O(nlogn)
    void findElement(int arr[], int size, int k)
    {
        int x = size / k;
        int count = 0;
        sort(arr, arr + size);
        for (int i = 1; i < size; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
            else if (count >= x)
            {
                cout << arr[i - 1] << " =" << count << endl;
                return;
            }
            else
            {
                count = 0;
            }
        }
    }
};
int main()
{
    int arr[] = {2, 21, 5, 3, 4, 4, 5, 5, 5, 5, 5, 55, 5, 6, 6, 7, 8, 86, 3, 3, 5, 1, 5, 3};
    elementAppear eA;
    eA.findElement(arr, 24, 3);
    return 0;
}