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

    for (left = 0, right = n - 1;; left++, right--){
        while (arr[left] < pivot)
            left++;
        while (pivot < arr[right])
            right--;
        if (left >= right)
            break;
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
    quick_sort(arr, left);
    quick_sort(arr + left, n - right);
        

}


int main()
{
    int arr[] = { 3, 5, 9, 10, 13, 100, 32, 41, -86, 1, 0, 2 };
        printf("The unsorted array is: \n");
    int n = sizeof arr / sizeof arr[0];
    int i = 0;
    for (i = 0; i < n; i++)
        printf("\t%d", arr[i]);
    printf("\n");
    quick_sort(arr, n);
    printf("the sorted array is: \n");
    for(i = 0; i < n; i++){
        printf("\t%d", arr[i]);
    }
    printf("\n");
}