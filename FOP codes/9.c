#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}