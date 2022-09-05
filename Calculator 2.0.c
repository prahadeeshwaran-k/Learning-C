#include <stdio.h>
#include <math.h>
int main(){
    int a,b,operator;
    printf("Enter a number A:");
    scanf("%d",&a);
    printf("Enter a number b:");
    scanf("%d",&b);
    printf("Add = 1\nSub = 2\nProduct = 3\nDivide = 4\nModulo = 5\nPower = 6\n");
    scanf("%d",&operator);
    switch (operator) {
        case 1:printf("%d+%d=%d",a,b,a+b); break;
        case 2:printf("%d+%d=%d",a,b,a-b); break;
        case 3:printf("%d",a*b); break;
        case 4:printf("%d",a/b); break;
        case 5:printf("%d",a%b); break;
        case 6:printf("%d", pow(a,b)); break;

    }

        return main()

}