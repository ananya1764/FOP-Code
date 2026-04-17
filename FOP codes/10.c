#include <stdio.h>

int main() {
    int choice, i;
    double a, b, result = 1;

    printf("1.Add 2.Subtract 3.Multiply 4.Divide 5.Power 6.Factorial\n");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 5) {
        scanf("%lf %lf", &a, &b);
    } else if(choice == 6) {
        scanf("%lf", &a);
    }

    switch(choice) {
        case 1:
            printf("%.2lf", a + b);
            break;
        case 2:
            printf("%.2lf", a - b);
            break;
        case 3:
            printf("%.2lf", a * b);
            break;
        case 4:
            if(b != 0)
                printf("%.2lf", a / b);
            else
                printf("Error");
            break;
        case 5:
            for(i = 1; i <= b; i++)
                result *= a;
            printf("%.2lf", result);
            break;
        case 6:
            result = 1;
            for(i = 1; i <= a; i++)
                result *= i;
            printf("%.0lf", result);
            break;
        default:
            printf("Invalid");
    }

    return 0;
}