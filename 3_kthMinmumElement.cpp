#include <bits/stdc++.h>
using namespace std;
class kthMinimumElement
{
public:
    void kthminimumElement(int arr[], int size, int position)
    {
        for (int i = 1; i < size; i++)
        {
            int hold = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > hold)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = hold;
        }

        cout << "kth smallest element is " << arr[position] << endl;
    }
};
int main()
{
    int arr[] = {223, 2343, 45345, 5, 53, 44, 234, 32};
    int size = 8;
    kthMinimumElement kml;
    kml.kthminimumElement(arr, size, 3);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    return 0;
}