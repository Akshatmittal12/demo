#include <stdio.h>

int main() {
    int a;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
