#include <bits/stdc++.h>
using namespace std;
class maximum
{
public:
    void Maximum(int arr[], int size)
    {
        int current = 0;
        int Maxi = 0;
        for (int i = 0; i < size; i++)
        {
            current = current + arr[i];
            if (current > Maxi)
            {
                Maxi = current;
            }
            if (current < 0)
            {
                current = 0;
            }
        }
        cout << "Maximum sum of sub array is " << Maxi;
    }
};
int main()
{
    int arr[] = {1, -23, 12, -23, -31, 1, 3, -23};
    int size = 8;
    maximum m;
    m.Maximum(arr, size);
    return 0;
}