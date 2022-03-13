#include <bits/stdc++.h>
using namespace std;
class MaxMin
{
    int max, min;

public:
    void maxmin(int arr[], int size)
    {
        // if only one element present in array
        if (size != 0)
        {
        
            if (size == 1)
            {
                max = min = arr[0];
                cout << "Maximum element of array is " << max << endl;
                cout << "Minimum element of array is " << min << endl;
                return;
            }

            // if two element present in array

            if (size == 2)
            {
                if (arr[0] > arr[1])
                {
                    max = arr[0];
                    min = arr[1];
                }
                else
                {
                    max = arr[1];
                    min = arr[0];
                }
                cout << "Maximum element of array is " << max << endl;
                cout << "Minimum element of array is " << min << endl;
                return;
            }

            // if more then two element present in array

            if (size > 2)
            {
                if (arr[0] > arr[1])
                {
                    max = arr[0];
                    min = arr[1];
                }
                else
                {
                    max = arr[1];
                    min = arr[0];
                }
                for (int i = 2; i < size; i++)
                {
                    if (max < arr[i])
                    {
                        max = arr[i];
                    }
                    else if (min > arr[i])
                    {
                        min = arr[i];
                    }
                }
                cout << "Maximum element of array is " << max << endl;
                cout << "Minimum element of array is " << min << endl;
            }
            
        }else{
            cout<<"Minimum one element array is allowed";
        }
    }
};
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;
    MaxMin mm;
    mm.maxmin(arr, size);
    return 0;
}