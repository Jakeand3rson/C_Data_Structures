#include "quick.h"

static int quick_sort(int *arr, int left, int right) {
    int pivot;

    if (left <= right) {
        pivot = partition(arr, left, right);

        quick_sort(arr, left, pivot -1);
        quick_sort(arr, pivot +1, right);
    }
    return
}

static int partition(*arr, int left, int right) {
    int pivot = left;
    int high = right;
    int low = left + 1;
    int temp;


}