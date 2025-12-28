#include <stdio.h>
int power(int base, int expo){
    int v=1;
    for(int i=0;i<expo;i++){
        v=v*base;
    }
    return v;
}
int power_cycle(int n){
    int first=n%10;
    int v=0,rem=0;
    while(n>9){
        rem=n%10;
        n=n/10;
        v=v+power(n%10,rem);
    }
    v=v+power(first,n);
    
    printf("sum :%d",v);
}

int main() {
    int n,temp;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    power_cycle(n);

    return 0;
}
