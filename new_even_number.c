#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int newnum = 0;
    int place = 1;  

    while (n > 0) {
        int last = n % 10;

        if (last % 2 == 0) {
            newnum = last * place + newnum;  
            place = place * 10;
        }

        n = n / 10;
    }

    printf("New number with even digits: %d", newnum);

    return 0;
}
