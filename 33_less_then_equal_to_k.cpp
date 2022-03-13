#include <bits/stdc++.h>
using namespace std;
class lessThenEqual
{
public:
    void lessthen(int arr[], int size, int k)
    {
        int i = 0;
        int a = size - 1;
        int count = 0;
        while (i != a)
        {
            if (arr[i] >= k && arr[a] <= k) 
            {
                int temp = arr[i];
                arr[i] = arr[a];
                arr[a] = temp;
                count++;
            }
            else if (arr[i] < k)
            {
                i++;
            }
            else if (arr[a] > k)
            {
                a--;
            }
        }
cout<<endl;
cout<<endl;
        cout << "minimun number of swap required is =" << count << endl;
    }
};
int main()
{
    int arr[] = {1, 23, 45, 6, 7, 8};
    int size = 6;
    lessThenEqual lte;
    lte.lessthen(arr, size, 9);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}