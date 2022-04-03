#include <bits/stdc++.h>
#include <math.h>
#include <minmax.h>
using namespace std;
class sequence
{
private:
    int hold = 0, max = 1;
    int Mmax(int a, int b)
    {
        if (a >= b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }

public:
/*

       //BrotForce Approche
       // time complexity nlogN
      // for sorted array if given array is not sorted first sort the given array 
     
     void SubSequence(int size, int arr[])
    {

        for (int i = 1; i < size; i++)
        {
            if (arr[i] == arr[i - 1] + 1)
            {
                hold++;
            }
            else if (arr[i] == arr[i - 1])
            {
                continue;
            }
            else
            {
                max = 1;
            }
            if (hold >= max)
            {
                max = hold;
            }
        }
        cout << "longest sequence of an array is =" << max;
     }

*/
    // optemise approche
    // time complexity O(n) and space comlexity O(n)
    void SubSequence(int size, int arr[])
    {
        unordered_set<int> s;
        for (int i = 0; i < size; i++)
        {

            s.insert(arr[i]);
        }
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            if (s.find(arr[i] - 1) == s.end())
            {
                int j = arr[i] + 1;
                while (s.find(j) != s.end())
                {
                    j++;
                }
                ans = Mmax(ans, j - arr[i]);
            }
        }

        cout << ans;
    }
};

int main()
{
    int arr[] = {1, 2, 3, 8, 9};
    sequence s;
    s.SubSequence(5, arr);
    return 0;
}