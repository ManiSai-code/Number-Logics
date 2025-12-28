#include <stdio.h>


int main() {
    int cnteven=0;int cntodd=0;int n;
    printf("enter n to check: ");
    scanf("%d", &n);
    while(n>0){
        int last=n%10;
        if(last%2==0){
            cnteven++;
        }
        else{
            cntodd++;
        }
        n=n/10;
    }
   
    printf("even count :%d odd count :%d",cnteven,cntodd);

    

    return 0;
}
