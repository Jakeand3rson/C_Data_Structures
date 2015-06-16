#include "quick_sort.h"



static int partition( int *arr, int left, int right) {
    int pivot = left;
    int high = right;
    int low = left + 1;
    int temp;

    while (low <= high) {
        while (arr[pivot] >= arr[low]) {
            low++;
        }
        while (arr[pivot] <= arr[high]) {
            high--;
        }
        if (low <= high) {
            temp = arr[high];
            arr[high] = arr[low];
            arr[low] = arr[temp];
        }
    }

    temp = arr[pivot];
    arr[pivot] = arr[high];
    arr[high] = temp;

    return high;
}

void quick_sort(int *arr, int left, int right) {
    int pivot;

    if (left <= right) {
        pivot = partition(arr, left, right);

        quick_sort(arr, left, pivot -1);
        quick_sort(arr, pivot +1, right);
    }
    return;
}

int main()
{
    int arr[] = { 3, 5, 9, 10, 13, 100, 32, 41, 86, 1, 0, 12 };
    int len, i;

    len  = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, len - 1);

    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}