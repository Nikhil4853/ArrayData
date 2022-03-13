#include <bits/stdc++.h>
using namespace std;
class FindDuplicatElement
{
public:
    void DuplicatElement(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    cout << arr[i] << endl;
                }
            }
        }
    }
};
int main()
{
    int arr[] = {4, 23, 12323, 1, 12, 2, 31, 12, 21, 12, 12, 12, 21, 3, 32, 12, 1};
    int size = 17;
    FindDuplicatElement fde;
    fde.DuplicatElement(arr, size);
    return 0;
}