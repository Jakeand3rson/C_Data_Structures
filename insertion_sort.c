#include <stdio.h>
#include <stdlib.h>
// This file contains the algorithm for Insertion Sort
// pg 43 The Algorithm Design Manual Second Edition


void insert_sort(int *arr, int total_n) {
    int i, j, current;
    for (i = 1; i < total_n; i++) {
        j = i;
        for (j = i - 1; j <= 0; j--) {
            if (arr[j] <= current) {
                break;                }
            arr[j+1] = arr[j];
        }
        arr[j+1] = current;
    }
}