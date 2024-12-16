/*1. Design an application to find that the accepted number is Negative, Positive, or Zero.
2. Design an application to read the marks of a student from the keyboard whether the
student is pass or fail.
3. Design an application to read three numbers from the keyboard and find out the
maximum out of these three.
4. Design an application to check whether the entered character is a capital, small letter,
digit, or any special character.
5. Design an application to read marks from the keyboard and your program should
display an equivalent grade according to the following table(if else ladder)
Marks and Grade
100 - 80 Distinction
79 - 60  First Class
59 - 40  Second Class
< 40 Fail
6. Design an application to read no 1 to 7 and print relatively day Sunday to Saturday.
7. Design an application to find out that a given number is odd or even.
8. Design a menu-driven application that will perform Add, subtract, and multiply two
numbers based on user choice (use the concept of switch statement).
9. Design an application to generate the first n number of the Fibonacci series
10. Design an application to find the sum and average of different numbers that are
accepted by user as many as the user wants
11. Design an application to check whether the given number is prime or not.
12. Design an application to evaluate the series 1^2+2^2+3^2+......+n^2
13. Design an application to find 1+1/2+1/3+1/4+. ........ +1/n.
14. Design an application to find the factorial of the given number.
15. Design an application to display a multiplication table for the given number.
16. Design an application to find the sum of all integers greater than 100 & less than 200
and are divisible by 5.
17. Design an application to print the following patterns :
1) *
**
***
****
*****
2) *****
****
***
**
*
3)
*
* *
* * *
* * * *
* * * * *
18. Design an application to print the following pattern.
19. Design an application to print the following pattern.
20. Design an application to reverse the given integer number.
New programs will be added based on the needs of the curriculum
*/

#include <stdio.h>
void q1();
void q2();
void q7();
void fibq9();

int main(){
    int n, choice;
    printf("Enter the question number: ");
    scanf("%d", &n);
    switch(n){
        case 1: q1(n); break;
        case 2: q2(n); break;
        case 7: q7(n); break;
        case 9: printf("Enter your choice: "); scanf("%d", &choice); fibq9(choice); break; 
        default: printf("Invalid question number"); break;
    }
    //q1();
    //q2();
    //q7();
    fibq9(n);
}
void q1(int n){
    
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==0){
        printf("%d is 0",n);
    }else{
        (n>0)? printf("%d is positive",n):printf("%d is negative",n);}
}
void q2(int n){
    printf("Enter marks: ");
    scanf("%d", &n);
    (n>50)? printf("Pass"):printf("try again");
}
void q7(int choice){
    printf("Enter a num from 1 to 7: ");
    scanf("%d", &choice);
    switch(choice){
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
        case 7: printf("Saturday"); break;
        default: printf("Invalid input"); break;
    }
}
void fibq9(int n){
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 0, b = 1, next;
    if (n==1 || n==2){
        printf("1");
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b; 
        a = b;
        b = next;
    }
}



