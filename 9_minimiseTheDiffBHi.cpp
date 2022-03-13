#include <bits/stdc++.h>
using namespace std;
class MinimiseTheMaximumDifferenceBW_Heights
{
public:
    void MaximumDifferenceHeights(int arr[], int size, int kthNumber)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] <= kthNumber)
            {
                arr[i] = arr[i] + kthNumber;
            }
            else
            {
                arr[i] = arr[i] - kthNumber;
            }
        }
        //sort<int>(*arr,size);
        // int height=arr[size-1]-arr[0];
        // cout<<"diference B/W height is  "<<height;
        int max, min;
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
                    cout << "ans is " << max - min << endl;
                }
      
        }
    }
};

    int main()
    {
        int arr[] = {1, 2, 3, 4, 5};
        int size = 5;
        MinimiseTheMaximumDifferenceBW_Heights mdh;
        mdh.MaximumDifferenceHeights(arr, size, 2);
        return 0;
    }