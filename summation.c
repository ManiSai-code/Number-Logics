#include <stdio.h>
int sums(int a){
    int summation=0;
    for(int i=a;i>0;i--){
        summation=summation+i;
    }
    return summation;
}

int main() {
    int n,temp;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0){
        int last=temp%10;
        sum=sums(last)+sum;
        temp=temp/10;
    }   
    printf("Sum after summation : %d",sum);

    return 0;
}
