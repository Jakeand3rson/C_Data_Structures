#include "quick_sort.h"

void quick_sort(int *arr, int left, int right) {
    int pivot;

    if (left <= right) {
        pivot = partition(arr, left, right);

        quick_sort(arr, left, pivot -1);
        quick_sort(arr, pivot +1, right);
    }
    return;
}

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