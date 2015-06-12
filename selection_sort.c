#include <stdio.h>
#include <stdlib.h>
// This file contains the algorithm for Selection Sort
// pg 42 The Algorithm Design Manual Second Edition
void select_sort (int s[], int n) {
    int i,j;
    int min;

    for (i=0; i<n; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (s[j] < s[min]) min = j;
        swap(&s[i], &s[min]);
        }
    }

in main() {
    int a[8] = {8,7,6,5,4,3,2,1,0};
    printf("The unsorted array is: \n");
    int i = 0;
    for (i= 0; i< 8; i++) {
        printf("\t%d", a[i]);
    }
    printf("\n");

    select_sort(a, 8);
    printf("The sorted array is :\n");
    for(i = 0, i < 8; i++) {
        printf("\t%d", a[i]);
    }
    printf("\n");
}