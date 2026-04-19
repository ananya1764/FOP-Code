#include <stdio.h>

int fact_iter(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

int fact_rec(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact_rec(n - 1);
}

int main() {
    int n, choice;

    printf("1.Non-Recursive 2.Recursive\n");
    scanf("%d", &choice);

    scanf("%d", &n);

    if(choice == 1)
        printf("%d", fact_iter(n));
    else if(choice == 2)
        printf("%d", fact_rec(n));
    else
        printf("Invalid");

    return 0;
}