#include <stdio.h>
#include <stdlib.h>

int opUnion(int *universal_set[], int v1, int v2) {
    
    return 0;
}


int main() {
    int set_list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int length = sizeof(set_list) / sizeof(set_list[0]);
    int universal_set[length];
    for (int i = 0; i < length; i += 2) {
        opUnion(universal_set, set_list[i], set_list[i + 1]);
    }
    return 0;
}