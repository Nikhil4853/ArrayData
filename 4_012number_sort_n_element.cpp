#include <bits/stdc++.h>
using namespace std;
class sort012
{
public:
    void Sort012(int arr[], int size)
    {
        int zero = 0;
        int one = 0;
        int two = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                zero++;
            }
            else if (arr[i] == 1)
            {
                one++;
            }
            else if (arr[i] == 2)
            {
                two++;
            }
        }
        int i = 0;
        while (zero > 0)
        {
            arr[i] = 0;
            zero--;
            i++;
        }
        while (one > 0)
        {
            arr[i] = 1;
            one--;
            i++;
        }
        while (two > 0)
        {
            arr[i] = 2;
            two--;
            i++;
        }
    }
};
int main()
{
    int arr[] = {0, 2, 1, 2, 2, 1, 2, 0, 0, 0, 2, 1, 2, 0, 1};
    int size = 15;
    sort012 s;
    s.Sort012(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
