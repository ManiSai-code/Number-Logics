#include <stdio.h>
int square(int a){
    
    return a*a ;
}

int main() {
    int n,temp;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0){
        int last=temp%10;
        sum=square(last)+sum;
        temp=temp/10;
    }   
    printf("Sum after square : %d",sum);

    return 0;
}
