#include <bits/stdc++.h>
using namespace std;

/*********************************************************************************************************
*********************************************************************************************************/

// // first approch
// // time O(n^2)
// // space O(1)
// void FindSum(int arr[], int size)
// {

//     bool ans = false;
//     for (int i = 0; i < size; i++)
//     {
//         int sum =0;
//         for (int j = i ; j < size; j++)
//         {
//             sum +=arr[j];
//               if(sum==0){
//                 ans=true;
//                 cout<<"true  ";
//                 break;
//             }
//         }
//         if(ans==true){

//             break;
//         }
//     }
//     cout<<ans;
// }

/*********************************************************************************************************
*********************************************************************************************************/




// Second approch
     // time  O(n)
     // space O(n)
void SumZero(int arr[], int size)
{   bool ans = false;
  unordered_set<int> Set;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
    if (sum == 0 || Set.find(sum) != Set.end())
    {
       ans=true;
      cout << "true";
       break;
    }

    Set.insert(sum);
  }
   cout<<ans;
}

int main()
{
  int arr[] = {1, 8, 4, -3, 3};
  int size = 5;
  //  FindSum(arr,size);
  SumZero(arr, size);
  return 0;
}