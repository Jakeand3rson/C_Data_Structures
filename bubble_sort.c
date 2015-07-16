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
    int n = sizeof a / sizeof a[0];
    int i;
    for (i = 0; i < n; i++) {
        printf("The numbers pre sort %d%s", a[i], i == n - 1 ?, "\n" : " ");
    }
    bubble_sort(a, n);
    for (i = 0; i < n; i++) {
        printf("The numbers post sort %d%s", a[i], i == n - 1 ?, "\n" : " ");
    }
    return 0;

}
