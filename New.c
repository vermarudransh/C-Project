#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Time
{
    int hrs;
    int min;
    /* data */
};

int main(){
    // struct Time t1, t2;
    // printf("Enter time 1 in hours and minutes: ");
    // scanf("%d %d", &t1.hrs, &t1.min);
    // printf("Enter time 2 in hours and minutes: ");
    // scanf("%d %d", &t2.hrs, &t2.min);
    int i,j,k,rows=5;
    for (i=0; i<rows; i++){
        printf("%*s",rows-i, " ");
        for(j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
}