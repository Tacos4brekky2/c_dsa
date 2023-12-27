#include <stdio.h>


int binarySearch(int x[],int length, int n) {
    int l = 0;
    int r = length;
    int target = (l + r) / 2;
    int count = 0;

    while (l < r) {
        count ++;
        printf("\nStep: %d\nSearching index: %d\n", count, target);
        if (x[target] == n) {
            printf("\n\nFound at index %d\n", target);
            return 0;
        } else if (x[target] <= n) {
            l = target;
            target = (l + r) / 2;
        } else if (x[target] >= n) {
            r = target;
            target = (l + r) / 2;
        }
    }
    printf("Not found in list");
    return 0;
}


int linearSearch(int x[],int length, int n) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        count++;
        printf("\nStep: %d\nSearching index: %d\n", count, i);
        if (x[i] == n) {
            printf("\n\nFound at index %d\n", i);
            return 0;
        }
    }
    printf("Not found in list");
    return 0;
}


int main() {
    int length = 301;
    int x[length];
    for (int i = 0; i < length; i++) {
        x[i] = i;
        //printf("i:v --> %d:%d\n", i, x[i]);
    }
    linearSearch(x, length, 42);
    return 0;
}