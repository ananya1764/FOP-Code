#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    int n, i, j;
    struct student s[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);

        s[i].total = 0;

        for(j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3;
    }

    for(i = 0; i < n; i++) {
        printf("\nRoll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total: %.2f\n", s[i].total);
        printf("Percentage: %.2f\n", s[i].percentage);

        if(s[i].percentage >= 40)
            printf("Result: Pass\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}