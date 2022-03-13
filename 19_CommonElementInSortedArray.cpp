#include <bits/stdc++.h>
using namespace std;
void CommonElement(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3)
{
    int p = size1 + size2 + size3;
    int comon[p];
    int i = 0, j = 0, k = 0;
    int a = 0;
    while (i < size1 && j < size2 && k < size3)
    {

        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            //cout<<arr1[i]<<endl;
            comon[a] = arr1[i];
            i++;
            j++;
            k++;
            a++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (int c = 0; c < a; c++)
    {
        cout << " ** " << comon[c];
    }
}
int main()
{
    int arr1[] = {2, 4, 6, 8, 10};
    int arr2[] = {8, 10, 12, 14, 16};
    int arr3[] = {6, 8, 10, 14, 16};
    int size = 5;

    CommonElement(arr1, arr2, arr3, size, size, size);
    return 0;
}