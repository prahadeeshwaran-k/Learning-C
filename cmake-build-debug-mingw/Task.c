#include <stdio.h>
int main(){
    int num1,num2 ;
    printf("TO FIND A GREATEST NUMBER BETWEEN TWO NUMBERS\n");
    printf("Enter a Number 1:\t ");
    scanf("%d",&num1);
    printf("Enter a Number 2:\t ");
    scanf("%d",&num2);
    if (num1>num2 ){
        printf("%d is greater than %d" ,num1,num2);
    }
    else{ printf("%d is greater than %d" ,num2,num1);}
    return 0;
}