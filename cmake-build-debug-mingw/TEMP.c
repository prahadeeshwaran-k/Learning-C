#include <stdio.h>
int main(){
    int num ;
    printf("TO FIND A GREATEST NUMBER BETWEEN TWO NUMBERS\n");
    printf("Enter a Number :\t ");
    scanf("%d",&num);

    if (num>0 ){
        printf("%d is POSITIVE %d" ,num);
    }
    if(num<0){
        printf("%d is NEGATIVE\n",num);
    }
    if(num == 0){
        printf("%d Hey!! you Select 0 are you kidding\n",num););
    }
    return 0;
}