#include <bits/stdc++.h>
using namespace std;
class ReverseArray
{

public:
    void Reversearray(int arr[], int size)
    {
 
        for (int i = 0; i < size - 1; i++)
        {
            int temp = arr[i];
            arr[i] = arr[size];
            arr[size] = temp;
            size--;
        }


    }

    void reverseArrayPrint(int arr[], int size)
    {
        for (int i = 0; i <= size; i++)
        {
            cout << i + 1 << "->" << arr[i] << endl;
        }
    }
};
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;
    ReverseArray RA;
    RA.Reversearray(arr, size - 1);
    RA.reverseArrayPrint(arr, size - 1);
    return 0;
}