#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
void reverse(int n);
void prime();
void digit4();
void avg(int n);
int main(){
    // int m,n;
    // printf("Enter two positive integers: ");
    // scanf("%d %d", &m, &n);
    // if (m%n==0){
    //     printf("%d is a multiple of %d", m, n);
    // }
    // else{
    //     printf("%d is not a multiple of %d", m, n);
    // }
    // }
    // int a,prod;
    // printf("Enter a four digit number: ");
    // scanf("%d", &a);
    // while (a!=0){
    //     prod*= a%10;
    //     a/=10;   
    // }
    // printf("Product of digits: %d", prod);
    //Write a program to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100.
    // int sum = 0;
    // for (int i = 6; i <= 100; i += 6) {
    //     if (i % 4!= 0) {
    //         sum += i;
    //     }
    // }
    // printf("Sum of integers divisible by 6 but not divisible by 4: %d\n", sum);
    // int i = 1;
    // int num=1;
    // printf("1 ");
    // while (i<6){
    //     num*=2;
    //     printf("%d, ", num);
    //     i++;
    // }
    // printf("%d \n",i);
    // int j = 1;
    // int num2=1;
    // printf("1 ");
    // while (j<6){
    //     num2*=3;
    //     printf("%d, ", num2);
    //     j++;
    // }
    //Design an application to reverse the given integer number.
    // int num;
    // printf("Enter an integer number: ");
    // scanf("%d", &num);
    // int reversed = 0;
    // while (num!= 0) {
    //     reversed = reversed * 10 + num % 10;
    //     num /= 10;
    // }
    // printf("Reversed number: %d\n", reversed);
    // char sstring[5];
    // char str2[20]="Hellowhoware you?";
    // printf("Enter a string: ");
    // gets(sstring);
    // //gets(sstring);
    // puts(sstring);
    // strncpy(sstring, str2,15);
    // puts(sstring);
    // int a =strlen(sstring);
    // // printf("%d",a);
    // int avg = 45, *p = &avg;
    // printf("%d", avg);
    // printf("\n%u", p);
    // printf("\n%u", &avg);
    // printf("\n%d", *p);
    // printf("\n%d", *&avg);
    // int m;
    // printf("enter mar: ");
    // scanf("%d", &m);
    // if (m>=80 && m<=100){
    //     printf("Grade Distinction\n");
    // }
    // else if (m>=60 && m<80){
    //     printf("Grade First Class\n");
    // }
    // else if (m>=40 && m<60){
    //     printf("Grade Second Class\n");
    // }
    // else if (m<40){
    //     printf("Grade F\n");
    // }
    // int fact;
    // printf("Enter a number: ");
    // scanf("%d", &fact);
    // int i;
    // int j=1;
    // for (i=1;i<=fact;i++){
    //     j*=i;
    // }
    // printf("%d", j);
    // return 0;
    //prime();
    //digit4();
    //avg(24);
    //Design an application to evaluate the series 1^2+2^2+3^2+......+n^2
    //Design an application to find 1+1/2+1/3+1/4+. ........ +1/n.
    int i, space, rows=5, k = 0;
     //give me the code to print 1 star in the first row then 2 star in the second and so on
    
    for (i = 5; i >=1; i--) {
        printf("%*s", rows - i, "");
        for (k = 1; k <= i; k++) {
            printf("%c ", ('A'+i) );
        }
        printf("\n");
    }
    
    // k = 0;
    // for (i = 1; i <= rows; i++, k=0) {
    //     for (space = 1; space <= rows - i; space++) {
    //         printf("  ");
    //     }
    //     while(k!=2*i-1){
    //         printf("* ");
    //         k=k+1;
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= rows; i++,k=0) {
    //    for (space = 1; space <= rows - i; space++) {
    //       printf("  ");
    //     }
    //    while(k!=2*i-1){
    //     //how do i alternate the printing of stars?
    //     //like * then * * then * * *
    //     //give me the code to print 1 star in the first row then 2 star in the second and so on
    //     printf("* ");
    //     k=k+1;
    //     }
    //    printf("\n");
    // }
    int max= INT_MIN;
} 
void reverse(int n){
    int remainder, reverse=0;
    while (n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
}

void prime(){
    int flag=0,n;
    printf("enter the range of int: ");
    scanf("%d", &n);
    printf("2");
    for (int i=3;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }else{
                flag=0;
            }
        }
        if(flag==0){
            printf("%d ", i);
        }
    }
}
void digit4(){
    int n,mult=1,j=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m= (1 + (int)log10(n));
    printf("%d ", m);
    for (int i=0;i<m;i++){
        j=n%10;
        mult=mult*j;
        n=n/10;
    }
    printf("%d ", mult);
}
void avg(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("Average: %f", (float)sum/n);
}