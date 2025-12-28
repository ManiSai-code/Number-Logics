#include <stdio.h>


int len(int n){
    int c = 0;
    while(n){
        c++;
        n = n / 10;
    }
    return c;
}


int makeZeros(int l){
    int z = 1;
    while(l > 1){      
        z = z * 10;
        l--;
    }
    return z;
}

int main() {
    int n;
    printf("enter n to reverse : ");
    scanf("%d", &n);

    int temp = n;          
    int length = len(n);   
    int zeros = makeZeros(length);
    int rev = 0;           

    while(temp > 0){
        int last = temp % 10;      
        rev = rev + last * zeros;  
        temp = temp / 10;          
        zeros = zeros / 10;        
    }

    printf("Reversed number = %d", rev);

    return 0;
}
