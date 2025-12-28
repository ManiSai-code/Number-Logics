#include <stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=a;i>0;i--){
        fact=fact*i;
    }
    return fact;
}

int main() {
    int n,temp;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0){
        int last=temp%10;
        sum=factorial(last)+sum;
        temp=temp/10;
    }   
    printf("Sum after factorial : %d",sum);

    return 0;
}
