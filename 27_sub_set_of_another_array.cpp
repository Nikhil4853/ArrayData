#include <bits/stdc++.h>
using namespace std;
class subSetOfArray
{
public:
    // time complexcity is O(n^2)

    void brootSubArray(int size1, int size2, int arr1[], int arr2[])
    {
        int j = 0;
        int i = 0;
        for (i = 0; i < size2; i++)
        {
            for (j = 0; j < size1; j++)
            {
                if (arr1[j] == arr2[i])
                {
                    break;
                }
            }
            if (j == size1)
            {
                cout << "array is not a sub set of another array";
                return;
            }
        }
        cout << "array is a sub set of another array";
    }
    // time complexcity is O(n)
    // space complexcity is O(m)
    void subArray(int size1, int size2, int arr1[], int arr2[])
    {
        unordered_set<int> s;
        int count = 0;
        for (int i = 0; i < size1; i++)
        {
            s.insert(arr1[i]);
        }
        for (int i = 0; i < size2; i++)
        {
            if (s.find(arr2[i]) != s.end())
            {
                count = count + 1;
            }
        }
        if (count == size2)
        {
            cout << " yes";
        }
        else
        {
            cout << "no";
        }
    }
};
int main()
{
    int arr1[] = {2, 32, 44, 5, 6, 77, 7, 9, 9, 8};
    int size1 = 10;
    int arr2[] = {2, 7, 9, 100, 6};
    int size2 = 4;
    subSetOfArray s;
    //  s.subArray(size1, size2, arr1, arr2);
    s.brootSubArray(size1, size2, arr1, arr2);
    return 0;
}