#include <stdio.h>

int main(){
    float marks[5];
    float avg = 0;
    for(int i=0; i < 5; i++){
        printf("Enter Mark in Subject %d:", i+1);
        scanf("%f",&marks[i]);
        avg += marks[i];
    }
    avg = avg/5;
    if(avg > 90){
        printf("A+ grade\n");
    }
    else if((avg <= 90) && (avg > 80)){
        printf("A grade\n");
    }
    else if((avg <= 80) && (avg > 70)){
        printf("B+ grade\n");
    }
    else if((avg <= 70) && (avg > 60)){
        printf("B grade\n");
    }
    else if((avg <= 60) && (avg >= 50)){
        printf("C grade\n");
    }
    else{
        printf("Re Appear\n");
    }
}