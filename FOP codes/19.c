#include <stdio.h>
#include <string.h>

struct employee {
    char name[50], desig[50], gender[10], doj[20];
    float salary;
};

int main() {
    struct employee e[100];
    int n, i, male = 0, female = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].desig);

        printf("Gender: ");
        scanf("%s", e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Count male/female
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].gender, "Male") == 0)
            male++;
        else
            female++;
    }

    printf("\nTotal employees = %d", n);
    printf("\nMale = %d", male);
    printf("\nFemale = %d", female);

    // Salary > 10000
    printf("\nEmployees with salary > 10000:\n");
    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }

    // Asst Manager
    printf("\nAsst Manager:\n");
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].desig, "AsstManager") == 0)
            printf("%s\n", e[i].name);
    }

    return 0;
}

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
