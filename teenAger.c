#include <stdio.h>

int main(){
    int age;
    printf("%d\n", age);
    scanf("%d",&age);
    if((age >= 13) && (age <= 19)){
        printf("You are a teenager.\n");
    }

    else{
        printf("You are not a teenager.\n");
    }

    return 0;
}