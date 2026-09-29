#include <stdio.h>

// Functions declared and defined at the top to save space
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float dvd(int a, int b) { return (float)a / b; }

int main() {
    int num1, num2, choice;

    while (1) {
        printf("Multiple functions to perform Arithmetic Operations\n");
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("\nChoose Operation:\n[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n[5] Exit Program\n\nEnter choice [1-5]: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        printf("\nResult: ");
        if (choice == 1) printf("%d + %d = %d\n\n", num1, num2, add(num1, num2));
        else if (choice == 2) printf("%d - %d = %d\n\n", num1, num2, sub(num1, num2));
        else if (choice == 3) printf("%d * %d = %d\n\n", num1, num2, mul(num1, num2));
        else if (choice == 4) printf("%d / %d = %.2f\n\n", num1, num2, dvd(num1, num2));
        else printf("Invalid choice!\n\n");
    }
    return 0;
}
