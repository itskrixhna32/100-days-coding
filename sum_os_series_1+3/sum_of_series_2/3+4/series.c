#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2, denominator = 3;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d/%d", numerator, denominator);
        sum += (double)numerator / denominator;

        if (i < n) {
            printf(" + ");
        }

        // update numerator and denominator
        numerator += 2;
        denominator += 4;
    }

    printf("\nSum of the series up to %d terms = %.6f\n", n, sum);

    return 0;
}