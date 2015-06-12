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