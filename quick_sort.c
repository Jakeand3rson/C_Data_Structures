#include <stdio.h>
#include <stdlib.h>
#include "quick_sort.h"


void quick_sort(int *arr, int n) {
    int left, right, pivot, temp;

    // if the array is just one number, return it. Aint nobody got time for that. 
    if (n < 2)
        return;
    // pivot is the middle of the array.
    pivot = arr[n / 2];

    for (left = 0, right = n - 1; left++, right--){
        while (arr[left] < pivot)
            left++;
        while (pivot < arr[right])
            right--;
        if (left >= right)
            break;
    }
        

}


// static int partition( int *arr, int left, int right) {
//     int pivot = left;
//     int high = right;
//     int low = left + 1;
//     int temp;

//     while (low <= high) {
//         while (arr[pivot] >= arr[low]) {
//             low++;
//         }
//         while (arr[pivot] <= arr[high]) {
//             high--;
//         }
//         if (low <= high) {
//             temp = arr[high];
//             arr[high] = arr[low];
//             arr[low] = temp;
//         }
//     }

//     temp = arr[pivot];
//     arr[pivot] = arr[high];
//     arr[high] = temp;

//     return high;
// }

// void quick_sort(int *arr, int left, int right) {
//     int pivot;

//     // divide and conquer
//     if (left <= right) {
//         pivot = partition(arr, left, right);

//         quick_sort(arr, left, pivot - 1);
//         quick_sort(arr, pivot +1, right);
//     }
//     return;
// }

int main()
{
    int arr[12] = { 3, 5, 9, 10, 13, 100, 32, 41, 86, 1, 0, 2 };
        printf("The unsorted array is: \n");
    int i = 0;
    for (i = 0; i < 12; i++)
        printf("\t%d", arr[i]);
    printf("\n");
    quick_sort(arr, 0, 12);
    printf("the sorted array is: \n");
    for(i = 0; i < 12; i++){
        printf("\t%d", arr[i]);
    }
    printf("\n");
}