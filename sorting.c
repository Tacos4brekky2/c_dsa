#include <stdio.h>


int isSorted(int x[], int length) {
    for (int i = 1; i < length; i++) {
        if (x[i] < x[i - 1]) {
            printf("\nNOT SORTED\n");
            return 1;
        }
    }
    printf("\nSORTED\n");
    return 0;
}


int bubbleSort(int x[], int length) {
    int sorted = 0;

    while (sorted == 0) {
        int count = 0;
        for (int i = 1; i < length; i++) {
            if (x[i] < x[i - 1]) {
                int tmp = x[i];
                x[i] = x[i - 1];
                x[i - 1] = tmp;
                count += 1;
            }
        }
        if (isSorted(x, length) == 0) {
            sorted = 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("Index:Value --> %d:%d\n", i, x[i]);
    }
    return 0;
}


int main() {
    int input[10] = {4, 8, 3, 1, 6, 9, 2, 5, 7, 10};
    bubbleSort(input, 10);
    return 0;
}