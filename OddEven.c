#include <stdio.h>
#include <string.h>
int main(void){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("%s\n",(a%2==0)?"Even":"Odd");
    return 0;
}