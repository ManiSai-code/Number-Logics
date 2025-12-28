#include<stdio.h>
void natural(int n){
    int sum = (n*(n+1))/2;
    printf("1 :sum of natural numbers---> %d \n",sum);
}
long fact(int n){
    long  f=1;
    for(int i =n;i>0;i--){
        f=f*i;
    }
    return f;
}
int xpowernbyn(int base,int exponent){
    int res=1;
    for(int i=0;i<exponent;i++){
        res*=base;
    }
    return res/fact(exponent);
}
int count(int n){
    int count=0;
    while(n){
        count=count+1;
        n=n/10;
    }
    return count;
}
int sumofall(int n){
    int temp=n;
    int last,sum=0;
    while(temp){
        last=temp%10;
        sum=sum+last;
        temp=temp/10;
    }
    return sum;
}
int reverse(int n){
    int rev=0;
    while(n){
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int max(int a ,int b){
    if(a>b)
        return a;
    else 
        return b;
}
int gcd(int a,int b){
    int res=min(a,b);
    while(res){
        if(a % res==0 && b % res==0){
            break;
        }
        res--;
    }
    return res;
}
int lcm(int a,int b){
    int res1=min(a,b);
    while (res1) {
        if (a % res1 == 0 && b % res1 == 0) {
            break;
        }

        res1++;
    }
return res1;
}
int prime(int x){  
    if(x < 2) return 0;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}
int palindrome(int n){
    if(n==reverse(n)){
        printf("%d is a palindrome",n);
        
    }else
        printf("%d not a palindrome",n);
}
void primefactors(int n){


    for(int i = 1; i <= n; i++){
        if(n % i == 0){     
            if(prime(i))   
                printf("%d ", i);
        }
    }
}
int perfectpquare(int n){
    for(int i = 1; i * i <= n; i++){
        if(i * i == n)
            return i;   
    }
    return 0;           
}
int len(int n){
   int length=0;
    while(n){
        length=length+1;
        n=n/10;
    }
    return length;
        
    }
int power(int base,int exponent){
     int res=1;
    for(int i=0;i<exponent;i++){
        res*=base;
    }
    return res;
}
int armstrong(int n){
    int length=len(n);
    int sum=0,last,temp=n;
    while(n){
        last=n%10;
        sum=sum+power(last,length);
        n=n/10;
    }
    if(temp==sum){
        printf("%d ---> is a ARMSTRONG number",temp);
        return temp;}
    else
        printf("%d --->is not a ARMSTRONG number",temp);
}
int fact1(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*fact1(n-1);
}
int strongnumber(int n){
    int last,sum=0,temp=n;
    while(n){
        last =n%10;
        sum=sum+fact1(last);
        n=n/10;
    }
     if (sum==temp) 
         printf("\n15 : %d---> is a strong number \n",temp);  
    else
         printf("\n15 : %d---> is not a strong numeber \n",temp);
}
int perfectnumber(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum == n){
        printf("16 :%d---> is a perferct number",n);
    return 1;}
    else
        {printf("16 :%d---> is not a perfect number",n);
        return 0;}
}
void harshardnum(int n){
    int sum=0,temp=n,last;
    while(n){
        last = n%10;
        sum =sum +last;
        n=n/10;
    }
    if(temp%sum==0)
        printf("\n17 :%d--> is a harshard number",temp);
    else
        printf("\n17 :%d--> is not a harshard number",temp);
}
void abundantnum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }

    }
    if(sum>n)
        printf("\n18 :%d---> is an abundant number",n);
    else
        printf("\n18 :%d---> is not an abundant number",n);
}
void automorphicnum(int n){
    int sq=n*n;
    int last=sq%10;
    if(last==n)
        printf("\n19 :%d---> is an automorphic number",n);
    else
        printf("\n19 :%d---> is not an automorphic number",n);
}
void magicnumber(int n)
{
    int sum = 0;
    
    
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    if(sum == 1)
        printf("\n20 : is a magic number");
    else
        printf("\n20 : is not a magic number");    
}
int factors_sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }return sum;
}  
int abundancy_index(int sum,int n){
    return sum/n;
} 
void friendlynumbers(int a,int b){
    int sum1=factors_sum(a);
    int sum2=factors_sum(b);
    int index1=abundancy_index(sum1,a);
    int index2=abundancy_index(sum2,b);
    if(index1==index2)
        printf("\n21 :%d and %d are friendly numbers",a,b);
    else
        printf("\n21 :%d and %d are not friendly numbers",a,b);
}
void neonnumber(int n){
    int sq=n*n;
    int sum=0;
    while(sq){
        sum=sum+sq%10;
        sq=sq/10;
    }
    if(sum==n)
        printf("\n22 :%d is a neon number",n);
    else
        printf("\n22 :%d is not a neon number",n);
}
void spynumber(int n){
    int product=1,sum=0,temp=n,last,temp1=n;
    while(temp){
    sum=sum+temp%10;
    temp=temp/10;
}
while(temp1){
    product=product*(temp1%10);
    temp1=temp1/10;
}if(sum==product)
    printf("\n23 :%d is a spy number",n);
else
    printf("\n23 :%d is not a spy number",n);
}
void happynumber(int n,int original){
    int sum = 0, last, sq;
    int temp = n;  

    while(n){
        last = n % 10;     
        sq = last * last;  
        sum = sum + sq;    
        n = n / 10;        
    }

    if(sum == 1){
        printf("\n24 : The given number %d is a happy number", original);
    }
    else{
        if(sum ==4){
            printf("\n24 : The given number %d is not a happy number",original);
            return;
        }
        
        happynumber(sum,original);
    }
}
void sunnynumber(int n){
    int ps=perfectpquare(n+1);

    if(ps)
        printf("\n25 : %d is a sunny number",n);
    else 
        printf("\n25 : %d is not a sunny number",n);
}
void disariumnumber(int n){
    int temp=n,sum=0,length;
    length=len(n);
    while(temp){
        int last =temp%10;
        sum=sum+power(last,length);
        temp=temp/10;
        length--;
    }
    if(sum==n)
        printf("\n26 : %d is a Disarium number",n);
    else   
        printf("\n26 : %d is not a disarium number",n);
}
void pronicnumber(int n){
    int flag=0;
    for(int i=0;i<n/2;i++){
        if(n==i*(i+1)){
            printf("\n27 : %d is a pronic number",n);
            flag=1;
            break;
        }
    }
    if(flag==0){
            printf("\n27 : %d is not a pronic number",n);

        }
}
void trimorphic(int n){
    int cube=n*n*n;
    int last=n%10;
    if(n==last)
        printf("\n28 : %d is a trimorphic number",n);
    else    
        printf("\n 28 : %d is not a trimorphic number",n);
}
int decimaltobinary(int n){
    int sum=0,a=1;
    while(n){
        sum=sum+(n%2)*a;
        a=a*10;
        n=n/2;
    }
    return sum;
}
int countofbinary(int n){
    int temp=n,last,c=0;
    while(temp){
        last =temp%10;
        if(last==1)
            c++;
        temp=temp/10;
    }return c;
}
int evilnumber(int n){
    int dec=decimaltobinary(n);
    int count=countofbinary(dec);
    if(count %2 ==0)
        printf("\n29 : %d is a evil numeber",n);
    else 
        printf("\n29 : %d is not a evil numeber",n);
}
int palindromes_in_range(int n){
    int rev;
    for(int i=1;i<=n;i++){
        rev=reverse(i);
        if(i==rev){
            printf("\n 30 : %d is a palindrome",i);
        }
    }
}
int primes_in_range(int n){
    for(int i=1;i<=n;i++){
        if(prime(i)){
            printf("\n31 : %d  is a prime number",i);
        }
    }
}
int perfect_square_number_in_range(int n){
    for(int i=1;i<=n;i++){
        if(perfectpquare(i)){
            printf("\n32 : %d is a perfect square number",i);
        }
    }
}
int armstrong1(int n){
    int length=len(n);
    int sum=0,last,temp=n;
    while(n){
        last=n%10;
        sum=sum+power(last,length);
        n=n/10;
    }
    if(temp==sum){
        
        return 1;}
    else
        return 0;
    
}
void armstrongnumbersinrange(int n){
    for(int i=1;i<=n;i++){
        if(armstrong1(i)){
            printf("\n33 : %d is a armstrong number",i);
        }
    }
}
int strongnumber1(int n){
    int last,sum=0,temp=n;
    while(n){
        last =n%10;
        sum=sum+fact1(last);
        n=n/10;
    }
     if (sum==temp) 
        return 1;    
       
    else
        return 0;    
   
}
int strongnumbersinrange(int n){
    for(int i=1;i<=n;i++){
        if(strongnumber1(i)){
            printf("\n34 : %d---> is a strong number",i);
        }
    }
}
int perfectnumberforrange(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum == n){
        
    return 1;}
    else
        {
        return 0;}
}
int perfect_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(perfectnumberforrange(i)){
            printf("\n35 : %d is a perfect number",i);
        }
    }
}
int harshardnum1(int n){
    int sum=0,temp=n,last;
    while(n){
        last = n%10;
        sum =sum +last;
        n=n/10;
    }
    if(temp%sum==0)
        return 1;
    else
        return 0;
}
int harshard_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(harshardnum1(i)){
            printf("\n36 :%d--> is a harshard number",i);
        }
    }
}
int abundantnum1(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }

    }
    if(sum>n)
        return 1;
    else
        return 0;
}
void abundant_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(abundantnum1(i)){
            printf("\n37 :%d---> is an abundant number",i);
        }
    }
}
int automorphicnum1(int n){
    int sq = n * n;
    int temp = n;

    while(temp){
        if((sq % 10) != (temp % 10))
            return 0;

        sq = sq / 10;
        temp = temp / 10;
    }
    return 1;
}
void automorphic_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(automorphicnum1(i)){
             printf("\n38 :%d---> is an automorphic number",i);
        }
    }
}
int magicnumber1(int n)
{
    int sum = 0;
    
    
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    if(sum == 1)
        return 1;
    else
        return 0;    
}
void magic_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(magicnumber1(i))
            printf("\n39 : %d--> is a magic number",i);
    }
}
int neonnumber1(int n){
    int sq=n*n;
    int sum=0;
    while(sq){
        sum=sum+sq%10;
        sq=sq/10;
    }
    if(sum==n)
        return 1;
    else
       return 0;
}
void neon_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(neonnumber1(i))
             printf("\n40 : %d--> is a neon number",i);
    }
}
int spynumber1(int n){
    int product=1,sum=0,temp=n,last,temp1=n;
    while(temp){
    sum=sum+temp%10;
    temp=temp/10;
}
while(temp1){
    product=product*(temp1%10);
    temp1=temp1/10;
}if(sum==product)
    return 1;
else
    return 0;
}
void spy_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(spynumber1(i))
            printf("\n41 :%d is a spy number",i);
    }
}
int happynumber1(int n, int original){
    int sum = 0, last, sq;

    while(n){
        last = n % 10;
        sq = last * last;
        sum = sum + sq;
        n = n / 10;
    }

    if(sum == 1){
        return 1;   
    }
    else{
        if(sum == 4){
            return 0;   
        }

        return happynumber1(sum, original);  
    }
}
void happy_numbers_in_range(int n){
    for(int i = 1; i <= n; i++){
        if(happynumber1(i, i))
            printf("\n42 : The given number %d is a happy number", i);
    }
}
int sunnynumber1(int n){
    int ps=perfectpquare(n+1);

    if(ps)
        return 1;
    else 
        return 0;
}
void sunny_numbers_in_range(int n){
    for(int i=0;i<=n;i++){
        if(sunnynumber1(i))
        printf("\n43 : %d is a sunny number",i);
    }
}
int disariumnumber1(int n){
    int temp=n,sum=0,length;
    length=len(n);
    while(temp){
        int last =temp%10;
        sum=sum+power(last,length);
        temp=temp/10;
        length--;
    }
    if(sum==n)
        return 1;
    else   
        return 0;
}
void disarium_numbers_in_range(int n){
    for(int i=1;i<=n;i++)
    {
        if(disariumnumber1(i)){
            printf("\n44 : %d is a Disarium number",i);
        }
    }
}
int pronicnumber1(int n){
    int flag=0;
    for(int i=0;i<n/2;i++){
        if(n==i*(i+1)){
            flag=1;
            break;
        }
    }
    return flag;
}
void pronic_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(pronicnumber1(i))
            printf("\n45 : %d is a pronic number",i);
    }
}
// int trimorphic1(int n){
//     int cube=n*n*n;
//     int last=cube%10;
//     if(n==last)
//         return 1;
//     else    
//         return 0;
// }
int trimorphic1(int n){
    int cube = n * n * n;
    int temp = n;
    int digits = 0;
    int pow10 = 1;
    while(temp){
        digits++;
        pow10 = pow10 * 10;
        temp = temp / 10;
    }
    if(cube % pow10 == n)
        return 1;
    else
        return 0;
}
void trimorphic_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(trimorphic1(i))
        printf("\n46 : %d is a trimorphic number",i);
    }
}
int evilnumber1(int n){
    int dec=decimaltobinary(n);
    int count=countofbinary(dec);
    if(count %2 ==0)
        return 1;
    else 
        return 0;
}
void evil_numbers_in_range(int n){
    for(int i=1;i<=n;i++){
        if(evilnumber1(i))
            printf("\n47 : %d is a evil numeber",i);
    }
}
int palindrome1(int n){
    if(n==reverse(n)){
        return 1;        
    }else
        return 0;
}
void n_th_palindrome(int n){
    int count=0;
    int num=1;
    while(count<n){
        if(palindrome1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n48 : %d--> is the %dth palindrome",num-1,n);
    }
}
void n_th_primenumber(int n){
    int count=0;
    int num=1;
    while(count<n){
        if(prime(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n49 : %d--> is the %dth primenumber",num-1,n);
    }
}
void n_th_perfectsquarenumber(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(perfectpquare(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n50 : %d--> is the %dth perfect square number",num-1,n);
    }
}
void n_th_armstrongnumber(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(armstrong1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n51 : %d--> is the %dth Armstrong number",num-1,n);
    }
}
void n_th_strongnumber(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(strongnumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n52 : %d--> is the %dth strong number",num-1,n);
    }
}
int perfectnumber1(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum == n){
        
    return 1;}
    else
        {
        return 0;}
}
void n_th_perfectnumber(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(perfectnumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n53 : %d--> is the %dth strong number",num-1,n);
    }
}
void n_th_harshardnumber(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(harshardnum1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n54 : %d--> is the %dth Harshard number",num-1,n);
    }
}
void n_th_abundant_number(int n){
    int count=0;
    int num=1;
    while(count<n){
        if(abundantnum1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n55 : %d--> is the %dth Abundant number",num-1,n);
    }
}            
void n_th_automorphic_number(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(automorphicnum1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n56 : %d--> is the %dth Automorphic number",num-1,n);
    }
}
void n_th_magic_number(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(magicnumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n57 : %d--> is the %dth Magic number",num-1,n);
    }
}
void n_th_neon_number(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(neonnumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n58 : %d--> is the %dth Neon number",num-1,n);
    }
}
void n_th_spy_number(int n){
    int count=0;
    int num=1;
    while(count<n){
        if(spynumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n59 : %d--> is the %dth spy number",num-1,n);
    }
}
void n_th_happy_number(int n){
int count=0;
    int num=1;
    while(count<n){
        if(happynumber1(num,num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n60 : %d--> is the %dth happy number",num-1,n);
    }
}
void n_th_sunny_number(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(sunnynumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n61 : %d--> is the %dth sunny number",num-1,n);
    }
}
void n_th_disarium_number(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(disariumnumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n62 : %d--> is the %dth Disarium number",num-1,n);
    }
}
void n_th_pronic_number(int n){
     int count=0;
    int num=1;
    while(count<n){
        if(pronicnumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n63 : %d--> is the %dth Pronic number",num-1,n);
    }
}
void n_th_trimorphic_number(int n){
    int count=0;
    int num=1;
    while(count<n){
        if(trimorphic1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n64 : %d--> is the %dth Trimorphic number",num-1,n);
    }
}
void n_th_evil_number(int n){
    int count=0;
    int num=1;
    while(count<n){
        if(evilnumber1(num)){
            count=count+1;
            
            }
       num++; }
        if(count==n){
                printf("\n65 : %d--> is the %dth evil number",num-1,n);
    }
}
void reverse_a_number_recursion(int n)
{
    static int rev = 0;   

    if (n == 0)
    {
        printf("\n66 : %d --> is the reversed number", rev);
        return;
    }

    int last = n % 10;
    rev = rev * 10 + last;

    reverse_a_number_recursion(n / 10);
}
void genetic_root(int n)
{  
    int sum = 0;

    if (n < 10)
    {
        printf("\n67 : %d -->  is the genetic root ", n);
        return;
    }

    while (n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    genetic_root(sum);
}
void digit_count(int n){
    int last,onecnt=0,zerocnt=0;
    
    while(n){
    last=n%10;
    if(last==1)
        onecnt++;
    else if(last==0)
        zerocnt++;
    n=n/10;
    }
    printf("\n68: %d --> is the one's count and %d is the zero's count",onecnt,zerocnt);
}
int add(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;  
        a = a ^ b;           
        b = carry << 1;      
    }
    printf("\n69 : %d is the sum without arthimetic numbers",a);
}
void largest_digit(int n){
    int max=0,last;
    while(n){
        last=n%10;
        if(last>max)
            max=last;
        n=n/10;

    } printf("\n70 : %d is the largest number",max);
}
void smallest_digit(int n){
    int min,last;
    while(n){
        last=n%10;
        min=last;
        if(last<min)
            min=last;
        n=n/10;

    } printf("\n71 : %d is the smallest number",min);
}
int factors_for_amicable(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n %i==0){
            sum =sum+i;
        }
    }return sum;
}
void amicable_pairs(int n,int m){
    int sumofnum1=factors_for_amicable(n);
    int sumofnum2=factors_for_amicable(m);
    if(sumofnum1==m && sumofnum2==n){
        printf("\n72 : %d and %d are a amicable pair",n,m);
    }
}
void second_largest_digit(int n)
{
    int last;
    int max1 = -1, max2 = -1;

    while (n > 0)
    {
        last = n % 10;

        if (last > max1)
        {
            max2 = max1;
            max1 = last;
        }
        else if (last > max2 && last != max1)
        {
            max2 = last;
        }

        n = n / 10;
    }

    if (max2 == -1)
        printf("\n73 : Second largest digit not found");
    else
        printf("\n73 : %d is the second largest digit", max2);
}
void second_smallest_digit(int n)
{
    int last;
    int min1 = 9, min2 = 9;

    while (n > 0)
    {
        last = n % 10;

        if (last < min1)
        {
            min2 = min1;
            min1 = last;
        }
        else if (last < min2 && last != min1)
        {
            min2 = last;
        }

        n = n / 10;
    }

    if (min2 == -1)
        printf("\n74 : Second smallest digit not found");
    else
        printf("\n74 : %d is the second smallest digit", min2);
}
int primefactors1(int n){


    for(int i = 1; i <= n; i++){
        if(n % i == 0){     
            if(prime(i))   
                {
                    if(i==2 || i==3 ||i== 5){
                        return 1;
                    }
                }
        }
    }
}
void ugly_number(int n){
    if(primefactors1(n)){
            printf("\n76 : %d is a ugly number ",n);
    }

    }
void narcissistic_number(int n){
    for(int i=1;i<=n;i++){
        if(armstrong1(i)){
            printf("\n81 : %d ",i);
        }
    }
}








int main(){
     int n;
     printf("enter a number:");
     scanf("%d",&n);
     natural(n);
     printf("2 :1/N!--->%f \n",1.0/fact(n));
     int x=5;
     printf("3 :(X^n)/N!--->%d \n",xpowernbyn(x,n));
     printf("4 :count-->%d \n",count(n));
     printf("5 :sum of digits-->%d \n",sumofall(n));
     printf("6 :reverse-->%d \n",reverse(n));
     int a =10, b=40;
     printf("7 : GCD or HCF--->%d \n",gcd(a,b));
     printf("8 : LCM --->%d \n",lcm(a,b));
     printf("9 : FACTORIAL --->%d \n",fact(n));
     printf("10 : PRIME FACTORS --->");
     primefactors(n);
     printf("\n11 : PALINDROME--->");
     palindrome(n);
     printf("\n12: PRIME NUMBER (0-false,1-true) --->%d\n",prime(n));
     printf("13 : PERFECT SQUARE for N --->%d %d * %d\n",n,perfectpquare(n),perfectpquare(n));
     printf("14 :");
     armstrong(n);
     strongnumber(n);
     perfectnumber(6);
     harshardnum(n);
     abundantnum(n);
     automorphicnum(7);
     magicnumber(n);
     friendlynumbers(6,28);
     neonnumber(10);
     spynumber(123);
     happynumber(7,7);
     sunnynumber(9);
     disariumnumber(175);
     pronicnumber(42);
     trimorphic(4);
    //  printf("%d",decimaltobinary(4));
    //  printf("%d",countofbinary(decimaltobinary(4)));
     evilnumber(9);
     palindromes_in_range(55);
     primes_in_range(100);
     perfect_square_number_in_range(100);
     armstrongnumbersinrange(100);
     strongnumbersinrange(100);
     perfect_numbers_in_range(100);
     harshard_numbers_in_range(100);
     abundant_numbers_in_range(100);
     automorphic_numbers_in_range(100);
     magic_numbers_in_range(100);
     neon_numbers_in_range(100);
     spy_numbers_in_range(100);
     happy_numbers_in_range(100);
     sunny_numbers_in_range(100);
     disarium_numbers_in_range(100);
    pronic_numbers_in_range(100);
    trimorphic_numbers_in_range(100);
    evil_numbers_in_range(100);
    n_th_palindrome(40);
    n_th_primenumber(40);
    n_th_perfectsquarenumber(40);
    n_th_armstrongnumber(10);
    n_th_strongnumber(4);
    n_th_perfectnumber(4);
    n_th_harshardnumber(40);
    n_th_abundant_number(10);
    n_th_automorphic_number(5);
    n_th_magic_number(10);
    n_th_neon_number(2);
    n_th_spy_number(40);
    n_th_happy_number(10);
    n_th_sunny_number(40);
    n_th_disarium_number(10);
    n_th_pronic_number(40);
    n_th_trimorphic_number(10);
    n_th_evil_number(10);
    reverse_a_number_recursion(12345);
    genetic_root(10);
    digit_count(1122330000);
    add(10,80);
    largest_digit(12345);
    smallest_digit(2345);
    amicable_pairs(220,284);
    second_largest_digit(12345);
    second_smallest_digit(12345);
    ugly_number(12);
    narcissistic_number(15);
   
    }
