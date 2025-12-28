#include <stdio.h>

int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result = result * base;
    }
    return result;
}

int main() {
    int n, temp;
    printf("Enter number: ");
    scanf("%d", &n);

    // Reverse number to process digits from left to right
    int rev = 0;
    temp = n;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    int sum = 0;

    // Now process digits left to right
    while(rev > 0){
        int curr = rev % 10;     // current digit
        rev /= 10;

        int next;
        if(rev == 0)
            next = 1;            // last digit → power 1
        else
            next = rev % 10;     // next digit

        sum += power(curr, next);
    }

    printf("Result = %d", sum);

    return 0;
}
