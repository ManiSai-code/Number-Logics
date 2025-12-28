// // #include <stdio.h>   to comment all first selelct lines and click on ctrl+k then ctrl +c 
// //to un comment ctrl+k then ctrl+u

// // int main()
// // {
// //    int a[3][2];
// //   a[0][5]=90;//ii
// //     //printf("%d",(int)*(&a+1)-(int)&a);
// //     printf("%d \n",a[0][5]);
// //     printf("%d \n",*(*a+5));//pp
// //     printf("%d \n",(*(a[0]+5)));//ip
// //     printf("%d \n",(*a)[5]);//pi
    
    
    
    
// //     return 0;
// // }


// // #include<stdio.h>

// // int main(){
// // int a[3][3];
// // a [1] [2]=90;

// // printf("%d %d %d %d\n", a[1][2],*(*(a+1)+2),*(a[1]+2),(*(a+1))[2]);
// // printf("%d %d %d %d\n", a[0][5],*(*a+5),*(a[0]+5),(*a)[5]);
// // printf("%d %d %d %d\n",a[2][-1],*(*(a+2)-1),*(a[2]-1),(*(a+2)) [-1]);
// // printf("%d %d %d\n", (int)(*a+1)-(int)*a,(int)(a+1)-(int)a,(int)(&a+1)-(int)a);
// // }

// #include <stdio.h>
// int zfillv(int n){
//     int z=1;
//     while(n){
//         z=z*10;
//         n=n/10;
//     }
//     return z;
// }

// int fir(int n){
//     int z=1;
//     while(n>999){
//         n=n/10;
//         z=z*10;
//     }
//     return z;
// }

// int len(int n){
//     int c=0;
//     while(n){
//         n=n/10;
//         c++;
//     }
//     return c;
// }
// int zfillr(int n){
//     int z=1;
//     for(int i=0;i<n;i++)
//         z=z*10;
//     return z;
// }
// // void merge(int n,int m){
// //     int half=len(n)/2;
// //     int r=n/zfillr(half);
// //     r=r*zfillv(m)+m;
// //     r=r*zfillr(half)+n%zfillr(half);
// //     printf("%d\n",r);
// // }
// void main(){
//     // merge(1234,7);      //12734
//     // merge(1234,77);     //127734
//     // merge(1234,777);    //1277734
//     // merge(1234,77777);  //127777734
//     // merge(12,7777777);  //177777772
//     // merge(12345,77);    //1237745
//     //int num1=zfillv(1234);
//     int n1=12345;
//     int n2=1234;
//     int num1=zfillv(n2);
//     int latest =n1*num1;
//     int res=latest+n2;

//     printf("%d \n",res);
// }





// #include <stdio.h>

// void compare(int n){
//     int temp = n;          // Copy original number
//     int max = 0;           // Smallest possible max
//     int min = 9;           // Largest possible min

//     while(temp){           // Loop until number becomes 0
//         int digit = temp % 10;   // Extract last digit

//         // Update max and min
//         if(digit > max)
//             max = digit;

//         if(digit < min)
//             min = digit;

//         temp = temp / 10;        // Remove last digit
//     }

//     printf("Max:%d Min:%d\n", max, min);
// }

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     compare(n);
//     return 0;
// }
//        int pow_nextdigit(int n) {
//     int v = 0;
//     while (n > 0) {
//         int p=1;
//         v = v + power(n % 10, p);
//         p = n % 10;          
//         n = n / 10;
//     }
//     return v;
// }                                            // #include <stdio.h>
//  #include <stdio.h>

// int main() {
//     long n, temp = 0, rev = 0;
//     printf("Enter number: ");
//     scanf("%ld", &n);

//     // Reverse number so we process left → right
//     temp = n;
//     while (temp > 0) {
//         rev = rev * 10 + (temp % 10);
//         temp /= 10;
//     }

//     long result = 0;

//     while (rev > 0) {
//         int first = rev % 10;
//         rev /= 10;

//         if (rev > 0) {
//             int second = rev % 10;
//             rev /= 10;

//             // swap second and first
//             result = result * 100 + (second * 10 + first);
//         } else {
//             // odd last digit → keep same
//             result = result * 10 + first;
//         }
//     }

//     printf("Swapped number = %ld", result);

//     return 0;
// }
#include <stdio.h>
int summation(int n){
    int s=0;
    for(int i=1;i<n+1;i++)
        s+=i;
    return s;
}
int rev(int n){
    int r=0;
    while(n){
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}
int len(int n){
    int l=0;
    while(n){
        n=n/10;
        l++;
    }
    return l;
}
void sum_samt(int n){
    int s=0;
    while(n){
        s=s+summation(n%10);
        n=n/10;
    }
    printf("summation sum of digits-> %d\n",s);
}

void sq_digts(int n){
    int v=0;
    while(n){
        v=v+(n%10)*(n%10);
        n=n/10;
    }
    printf("sq sum of digits-> %d\n",v);
}
int power(int b,int ex){
    int v=1;
    for (int i=0;i<ex;i++)
        v=v*b;
    return v;
}
void len_pow(int n){
    int l=len(n);
    int v=0;
    while(n){
        v=v+power(n%10,l);
        n=n/10;
    }
    printf("len_pow sum of digits-> %d\n",v);
}

void cu_pu_next(int n){
    int v=0;
    int r=1;
    while(n){
        v=v+power(n%10,r);
        r=n%10;
        n=n/10;
    }
    printf("cu_pu_next digits-> %d\n",v);
}
void pow_cycle(int n){
    int f=n%10, v=0, rem=0;
    while(n>9){
        rem=n%10;
        n=n/10;
        v=v+power(n%10,rem);
    }
    v=v+power(f,n);
    printf("pow_cycle of num-> %d\n",v);
}

void ad_swap(int n){
    int v=0;
    if(len(n)%2!=0){
        v=v*10+n%10;
        n=n/10;
    }
    while(n){
        v=v*100+n%100;
        n=n/100;
    }
    printf("ad_swap of digitd-> %d\n",rev(v));
}
int main()
{
    int n=2345;
    printf("input-> %d\n",n);
    sum_samt(n);
    sq_digts(n);
    len_pow(n);
    cu_pu_next(n);
    pow_cycle(n);
    ad_swap(n);
    
    return 0;
}
