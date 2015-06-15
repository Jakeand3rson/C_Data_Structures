#include <stdio.h>
#include "merge_sort.h"

// This is the main function to test merge_sort.h

int main() {
    int a[8] = {8,7,6,5,4,3,2,1};
    printf("the unsorted array is: \n");
    int i = 0;
    for(i = 0;i< 8;i++)
        printf("\t%d", a[i]);
    printf("\n");
    sort(a, 0, 8);
    printf("the sorted array is: \n");
    for(i = 0; i < 8;i++){
        printf("\t%d", a[i]);
    }
    printf("\n");
}