#include <stdio.h>

int main() {
    long n, temp = 0, rev = 0;
    printf("Enter number: ");
    scanf("%ld", &n);

    // Reverse number so we process left → right
    temp = n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    long result = 0;

    while (rev > 0) {
        int first = rev % 10;
        rev /= 10;

        if (rev > 0) {
            int second = rev % 10;
            rev /= 10;

            // swap second and first
            result = result * 100 + (second * 10 + first);
        } else {
            // odd last digit → keep same
            result = result * 10 + first;
        }
    }

    printf("Swapped number = %ld", result);

    return 0;
}
