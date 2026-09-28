#include <stdio.h>

int main() {

    char name[50];
    int c, java, dsa;
    int total;
    float percentage;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks in C: ");
    scanf("%d", &c);

    printf("Enter marks in Java: ");
    scanf("%d", &java);

    printf("Enter marks in DSA: ");
    scanf("%d", &dsa);

    total = c + java + dsa;
    percentage = total / 3.0;

    printf("\n--- Student Result ---\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 75)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}