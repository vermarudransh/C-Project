#include <string.h>
#include <stdio.h>

// void main(){
//     int nums[10],i;
//     for (i=0;i<10;i++){
//         printf("Enter number: ");
//         scanf("%d", &nums[i]);

//     }
//     int max = nums[0];
//     for (i=1;i<10;i++){
//         if (nums[i]>max){
//             max = nums[i];
//         }

//     }
//     printf("max value is %d\n",max);

// }
// void main(){
//     int matrix[3][3],i,j;
//     printf("Enter elements of the matrix:\n");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("The entered matrix is:\n");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     int matrix2[3][3];
//     printf("Enter elements of the second matrix:\n");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &matrix2[i][j]);
//         }
//     }
//     printf("The sum of the two matrices is:\n");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", matrix[i][j] + matrix2[i][j]);
//         }
//         printf("\n");
//     }
// // }
// void printhellow();
// void square();
// void square1();
// void main(){
//     printhellow();
//     int num = 5;
//     square1(num);
//     square(&num);//changes the value at address
// }
// void printhellow(){
//     printf("Hello World!\n");
// }
// void square1(int n){
//     n = n * n;
//     printf("Square of %d is %d\n", n,n);
// }
// void square(int *n){
//     *n = (*n) * (*n);
//     printf("Square of %d is %d\n", *n,*n);

// }
// //swapping
// void swap(int a, int b);
// void swap2(int *a, int *b);
// int main(){
//     int x=25, y=15;
//     swap(x,y);
//     printf("After swapping: a=%d, b=%d\n", x, y);//should be wrong 
//     swap2(&x,&y);
//     printf("After swapping: a=%d, b=%d\n", x, y); //should be correct


// }
// //call by value
// void swap(int a, int b){
//     int c=a;
//     a=b;
//     b=c;
//     printf("After swapping: a=%d, b=%d\n", a, b);
// }
// //call by ref
// void swap2(int *a,int *b){
//     int c= *a;
//     *a=*b;
//     *b=c;


// }
//printing the address of variable using pointers
// int main(){
//     int x;
//     int *ptr=&x;
//     printf("Address of variable:%u\n ", ptr);
//     //accessing elemtns using pointer
//     *ptr=5;
//     printf("Value of variable:%d ", x);

// }

//Design an application to print the address of the character and the character of the string

// void char_Add(char* str){
//     char *ptr=str;
//     while (*ptr != '\0') { // Loop until the end of the string
//         printf("Character: '%c', Address: %p\n", *ptr, (void *)ptr);
//         ptr++;
//         }
// }
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%[^\n]", str);
//     char_Add(str);
//     printf("Address of the string: %p\n", str);
//     printf("Character of the string: %c\n", *str);
//     return 0;
 
// }
//9. Process to convert days into months and days.
// int main(){
//     int days,months,years;
//     printf("Enter num of days: "); 
//     scanf("%d",&days);
//     years = days/365;
//     days = days%365;
//     months = days/30;
//     days = days%30;
//     printf("Years: %d, Months: %d, Days: %d\n", years, months, days);
// }
//10. Process to convert minutes into hours and minutes.
// int main(){
//     int min,hours;
//     printf("enter the minutes: "); 
//     scanf("%d",&min);
//     hours=min/60;
//     min=min%60;
//     printf("Hours: %d, Minutes: %d\n", hours, min);
// }
//Design an application that reads two nos. from a keyboard and gives their addition, subtraction, multiplication, division, and modulo.
// int add();
// void mult( );
// void sub();
// void div();
// void mod();

// int main(){
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     add(&num1, &num2);
//     mult(&num1, &num2);
//     sub(&num1, &num2);
//     div(&num1, &num2);
//     mod(&num1, &num2);
// }
// int add(int* a, int* b){
//     static int sum;
//     sum = *a + *b;
//     printf("Sum is: %d\n", sum);
//     return sum;
// }
// void sub(int* a, int* b){
//     int diff = *a - *b;
//     printf("Difference is: %d\n", diff);
// }
// void div(int* a, int* b){
//     float div= *a / *b;
//     printf("Division is: %.2f\n", div);
// }

// void mult(int* a, int* b){
//     int product = *a * (*b);
//     printf("Product is: %d\n", product);
// }
// void mod(int* a, int*b ){
//     int mod = *a % *b;
//     printf("Modulus is: %d\n", mod);
// }

// Design an application that finds the area of a triangle (a=h*b*0.5). Where a = area h = height b = base
// int main(){
//     float h, b, area;
//     printf("Enter the height and base of the triangle: ");
//     scanf("%f %f", &h, &b);
//     area = (h * b) * 0.5;
//     printf("The area of the triangle is: %.2f\n", area);
//     return 0;
// }
// //Design an application that calculates simple interest i = (p*r*n)/100. Where i = Simple
// int main(){
//     float p, r, n, i;
//     printf("Enter principal amount, rate of interest, and time in years: ");
//     scanf("%f %f %f", &p, &r, &n);
//     i = (p * r * n) / 100;
//     printf("The simple interest is: %.2f\n", i);
//     return 0;
// }

//4. Design an application that interchanges the value of two variables.
// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;  // Store the value of 'a' in 'temp'
//     *a = *b;    // Assign the value of 'b' to 'a'
//     *b = temp;  // Assign the value of 'temp' to 'b'
// }

// int main() {
//     int x , y ;
//     printf("Enter the values of x and y: ");
//     scanf("%d %d", &x, &y);  // Read the values of x and y from user

//     printf("Before swapping: x = %d, y = %d\n", x, y);

//     // Call the swap function
//     swap(&x, &y);

//     printf("After swapping: x = %d, y = %d\n", x, y);

//     return 0;
// }
//Design an application that takes a distance into kilometer and convert it into meter, feet, inches, and centimeters.
/*int main(){
    float distance, meter, feet, inches, centimeters;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &distance);
    meter = distance * 1000;
    feet = meter * 3.2;
    inches = feet * 12;
    centimeters = inches * 2.54;
    printf("Distance in meters: %.2f\n", meter);
    printf("Distance in feet: %.2f\n", feet);
    printf("Distance in inches: %.2f\n", inches);
    printf("Distance in centimeters: %.2f\n", centimeters);
    return 0;
}
//. Design an application that computes Fahrenheit from centigrade (f=1.8*c +32)

int main(){
    float celsius, fahrenheit;
    printf("Enter the temperature in centigrade: ");
    scanf("%f", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}

/* esign an application to prepare pay slips using the following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = ba 

int main(){
    float basic, da, hra, ma, pf, gross;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    da = basic * 0.10;
    hra = basic * 0.075;
    ma = 300;
    pf = basic * 0.125;
    gross = basic + da + hra + ma - pf;
    printf("Basic: %.2f\n", basic);
    printf("Dearness of Work (DA): %.2f\n", da);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Medical Allowance (MA): %.2f\n", ma);
    printf("Provident Fund (PF): %.2f\n", pf);
    printf("Gross Salary (GS): %.2f\n", gross);
}*/
