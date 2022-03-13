#include <limits.h>

#include <stdio.h>

 


int minJumps(int arr[], int l, int h)

{

    // Base case: when source and destination are same

    if (h == l)

        return 0;

 

    // When nothing is reachable from the given source

    if (arr[l] == 0)

        return 0;

 

    // Traverse through all the points

    // reachable from arr[l]. Recursively

    // get the minimum number of jumps

    // needed to reach arr[h] from these

    // reachable points.

    int min = INT_MAX;

    for (int i = l + 1; i <= h && i <= l + arr[l]; i++) {

        int jumps = minJumps(arr, i, h);

        if (jumps != INT_MAX && jumps + 1 < min)

            min = jumps + 1;

    }

 

    return min;
}

int main()

{

    int arr[] = { 10, 3, 6, 3, 2, 3, 6, 8, 9, 5 };

    int n = sizeof(arr) / sizeof(arr[0]);

    printf(

        "Minimum number of jumps to reach end is %d ",

        minJumps(arr, 0, n - 1));

    return 0;

}
