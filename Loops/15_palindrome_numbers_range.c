#include <stdio.h>

int main() {
    int n, i, num, reverse, remainder, original;

    printf("Enter range: ");
    scanf("%d", &n);

    printf("Palindrome numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++) {
        num = i;
        reverse = 0;
        original = num;

        while(num != 0) {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }

        if(original == reverse)
            printf("%d ", i);
    }

    return 0;
}