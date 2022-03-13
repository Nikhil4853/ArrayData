#include <bits/stdc++.h>
using namespace std;
class OneSideAllNumber
{
public:
    void Negative(int arr[], int size)
    {
        int temp, j = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < 0)
            {
                if (i != j)
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                j++;
            }
        }
    }
};
int main()
{
    int arr[] = {-45, -23, 134, -2, 435, -1};
    int size = 6;
    OneSideAllNumber osn;
    osn.Negative(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}