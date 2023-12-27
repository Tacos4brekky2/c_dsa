#include <stdio.h>

int main() {
    int input[10] = {4, 8, 3, 1, 6, 9, 2, 5, 7, 10};
    int sorted = 0;

    while (sorted == 0) {
        int count = 0;
        for (int i = 1; i < 10; i++) {
            if (input[i] < input[i - 1]) {
                int tmp = input[i];
                input[i] = input[i - 1];
                input[i - 1] = tmp;
                count += 1;
            }
        }
        if (count == 0) {
            sorted = 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("Index:Value --> %d:%d\n", i, input[i]);
    }
    return 0;
}