#include <bits/stdc++.h>
using namespace std;
class elementAppear
{
public:
    // time O(nlogn)
    // space O(1)
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
    // time O(n) and space O(n)
    void element(int arr[], int size, int k)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < size; i++)
        {
            m[arr[i]] += 1;
        }
        for (auto it : m)
        {
            // it.second =is value of the map 
            if(it.second>k)
            { // it.first = is key of the map 
                cout << it.first<<endl;}
        }
    }
};
int main()
{
    int arr[] = {2, 21, 5, 3, 4, 4, 5, 5, 5, 5, 5, 55, 5, 6, 6, 7, 8, 86, 3, 3, 5, 1, 5, 3};
    elementAppear eA;
  //  eA.findElement(arr, 24, 3);
    eA.element(arr,24,2);
    return 0;
}