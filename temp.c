#include <stdio.h>
int main(){
    int num ;
    printf("TO FIND A POSITIVE OR NEGATIVE VALUE");
    printf("\nEnter a Number :");
    scanf("%d",&num);

    if (num>0 ){
        printf("%d is POSITIVE %d" ,num);
    }
    if(num<0){
        printf("%d is NEGATIVE\n",num);
    }
    if(num == 0){
        printf("Hey!! you Select 0 are you kidding\n");
    }
    return main();
}