#include <bits/stdc++.h>
using namespace std;
void removeDups(int arr[], int n)
{
    // Hash map which will store the
    // elements which has appeared previously.
    unordered_map<int, bool> mp;
 
    for (int i = 0; i < n; ++i) {
 
        // Print the element if it is not
        // there in the hash map
        if (mp.find(arr[i]) == mp.end()) {
            cout << arr[i] << " ";
        }
 
        // Insert the element in the hash map
        mp[arr[i]] = true;
    }
};
class unionOfTowArray
{
public:
    int newUnion[40];
    int k = 0;
    void UnionOfTwoArray(int arr1[], int arr1Size, int arr2[], int arr2Size)

    {

        for (int i = 0; i < arr1Size; i++)
        {
            newUnion[k] = arr1[i];
            k++;
        }
        for (int i = 0; i < arr2Size; i++)
        {
            bool element = true;
            for (int j = 0; j < arr1Size; j++)
            {
                if (arr2[i] == arr1[j])
                {
                    element = false;
                    break;
                }
            }
            if (element)
            {
                newUnion[k] = arr2[i];
                k++;
            }
        }
    }
    void ans(){
removeDups(newUnion,k);
    }

};

int main()
{

    int arr1[] = {1, 2, 3, 4, 3, 3, 3222, 2, 2, 2, 2, 2, 5};
    int arr1Size = 13;
    int arr2[] = {1, 2, 3, 3};
    int arr2Size = 12;
    unionOfTowArray ufta;
    ufta.UnionOfTwoArray(arr1, arr1Size, arr2, arr2Size);

   ufta.ans();
    return 0;
}
