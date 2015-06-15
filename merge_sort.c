#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"
// This program will impliment merge sort

// This funtion will merge two sorted arrays
void merge(int *arr, int l_start, int r_start, int r_end) {
    int total = r_end - l_start;

    int *temp = NULL;
    temp = (int *) malloc(sizeof(int) * total);
    if (temp == NULL)
        fprintf(stderr, "Failed memory allocation \n");

    int i = l_start;
    int j = r_start;
    int k = 0;

    while (i < r_start && j < r_end) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i < r_start) {
        temp[k++] = arr[i++];
    }

    while (i < r_end) {
        temp[k++] = arr[j++];
    }

    for (i = 0; j = l_start; i < total; i++; j++)
        arr[j] = temp[i];

    free(temp);

}

//recursively sorting
void sort(int *arr, int start, int end){
    int total = end - start;
    int l_start = start;
    int r_start = (total % 2 == 0) ? (start + end) / 2 : (start + end + 1) / 2;
    int r_end = end;

    // Check size of array. If its one... easy peasy 
    if (total < 2)
        return;

    // if its just two items.. Just call merge()
    if (total == 2)
        merge(arr, l_start, r_start, r_end);

    
}