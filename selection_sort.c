#include <stdio.h>
#include <stdlib.h>
// This file contains the algorithm for Selection Sort
// pg 42 The Algorithm Design Manual Second Edition
void select_sort (int *arr, int n) {
    int i, j, temp;
    int min;

    for (i=0; i<n; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) 
                min = j;
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main() {
    int a[8] = {11,7,3,19,4,99,2,1};
    printf("the unsorted array is: \n");
    int i = 0;
    for(i = 0;i<8;i++){
        printf("\t%d", a[i]);
    }
    printf("\n");

    select_sort(a, 8);
    printf("the sorted array is: \n");
    for(i=0;i<8;i++){
        printf("\t%d", a[i]);
    }
    printf("\n");
}