#include <stdio.h>

int main(){
    float a,b,ans;
    ans = 0;
    char control;
    scanf("%c", &control);
    scanf("%f", &a);
    scanf("%f", &b);
    switch (control) {
        case '+':ans = a + b;
            printf("%f",ans);
            break;
        case '-':ans = a - b;
            printf("%f",ans);
            break;
        case '*':ans = a * b;
            printf("%f",ans);
            break;
        case '/':ans = a / b;
            printf("%f",ans);
            break;
        default:
            printf("No Operation found");
            break;
    }
    return main();
}