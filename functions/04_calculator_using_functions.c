#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {

    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Result = %d", add(a,b));
            break;

        case 2:
            printf("Result = %d", sub(a,b));
            break;

        case 3:
            printf("Result = %d", multiply(a,b));
            break;

        case 4:
            printf("Result = %d", divide(a,b));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a*b;
}

int divide(int a, int b) {
    return a/b;
}
