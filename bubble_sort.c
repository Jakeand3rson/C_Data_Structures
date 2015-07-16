#include <stdio.h>

void bubble_sort (int *a, int n) {
    int i, t, s = 1;
    while (s) {
        s = 0;
        for (i = 1; i < n; i++) {
            if(a[i] < a[i - 1]) {
                t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                s = 1;
            }
        }
    }
}

int main() {
    int a[] = {4, 65, 76, 34, 453, 23, 65, 76, 87, 67, 433};
}
