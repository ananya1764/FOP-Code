#include <stdio.h>

// Call by value
void swap1(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swap (without pointers): a=%d b=%d", a, b);
}

// Call by reference
void swap2(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap1(a, b);

    swap2(&a, &b);
    printf("\nAfter swap (with pointers): a=%d b=%d", a, b);

    return 0;
}