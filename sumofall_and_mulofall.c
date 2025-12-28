#include <stdio.h>


int main() {
    int n,temp;
    int mul=1;
    printf("Enter number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0){
        int last=temp%10;
        mul=last*mul;
        temp=temp/10;
    }   
    printf("Sum of all digits : %d",mul);

    return 0;
}
