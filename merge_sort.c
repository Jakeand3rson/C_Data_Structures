#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"
// This program will impliment merge sort

// This funtion will merge two sorted arrays
void merge (int *arr, int l_start, int r_start, int r_end) {
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

    while (j < r_end) {
        temp[k++] = arr[j++];
    }

    for (i = 0, j = l_start; i < total; i++, j++)
        arr[j] = temp[i];

    free(temp);

}

//recursively sorting
void sort (int *arr, int start, int end) {
    int total = end - start;
    int l_start = start;
    int r_start = (total % 2 == 0) ? (start + end) / 2 : (start + end + 1) / 2;
    int r_end = end;

    // Check size of array. If its one... easy peasy 
    if (total < 2)
        return;

    // If its just two items.. Just call merge()
    else if (total == 2)
        merge(arr, l_start, r_start, r_end);

    // If the array is bigger than two items, recursively call merge()

    else {
        if (r_start - l_start > 1)
            sort(arr, l_start, r_start);
        if (r_end - r_start > 1)
            sort(arr, r_start, r_end);


        // After the recursion is finished, merge that shit.
        merge(arr, l_start, r_start, r_end);
    }

}

int main() {
    int a[8] = {8,7,9,5,4,3,2,1};
    printf("The unsorted array is: \n");
    int i = 0;
    for (i = 0; i < 8; i++)
        printf("\t%d", a[i]);
    printf("\n");
    sort(a, 0, 8);
    printf("the sorted array is: \n");
    for(i = 0; i < 8; i++){
        printf("\t%d", a[i]);
    }
    printf("\n");
}