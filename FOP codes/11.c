#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;
    long long fact = 1;

    scanf("%d", &num);

    printf("Square Root = %.2f\n", sqrt(num));
    printf("Square = %d\n", num * num);
    printf("Cube = %d\n", num * num * num);

    if(num <= 1)
        isPrime = 0;
    else {
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    for(i = 1; i <= num; i++)
        fact *= i;

    printf("Factorial = %lld\n", fact);

    printf("Prime Factors: ");
    for(i = 2; i <= num; i++) {
        while(num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    return 0;
}