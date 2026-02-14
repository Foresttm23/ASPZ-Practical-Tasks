#include <stdio.h>

int main() {
    int num = 3;
    int *ptr;

    ptr = num; // ptr = &num;

    printf("Значення: %d\n", ptr);
    return 0;
}
