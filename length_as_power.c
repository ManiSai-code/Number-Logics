#include <stdio.h>
int power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result = result * base;
    }
    return result;
}
int len(int n){
    int c = 0;
    while(n){
        c++;
        n = n / 10;
    }
    return c;
}
int main() {
    int n,temp;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp=n;
    int length=len(n);
    while(temp>0){
        int last=temp%10;
        sum=power(last,length)+sum;
        temp=temp/10;
    }   
    printf("Sum after length : %d",sum);

    return 0;
}
