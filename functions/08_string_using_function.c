#include <stdio.h>
#include <string.h>

void displayString(char str[]);

int main() {

    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    displayString(str);

    return 0;
}

void displayString(char str[]) {

    printf("String is: %s", str);

}
