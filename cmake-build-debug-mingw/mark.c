#include <stdio.h>

int main() {

    printf("****************MARKS FOR GRADE****************\n");
    printf("Please enter your got \n");
    int English, Maths, Tamil, Social, Science, Computer ,Total;
    float avg;
    char subject[6][10]= {"English", "Maths", "Tamil", "Social", "Science", "Computer"};
    int MARK[6];
    for (int i = 0; i < 6; i++) {
        printf("%s:", &subject[i]);
        scanf("%d", &MARK[i]);
    }

    English = MARK[0];
    Maths = MARK[1];
    Tamil = MARK[2];
    Social = MARK[3];
    Science = MARK[4];
    Computer = MARK[5];
    printf("English: %d\n", English);
    printf("Maths: %d\n", Maths);
    printf("Tamil: %d\n", Tamil);
    printf("Social: %d\n", Social);
    printf("Science: %d\n", Science);
    printf("Computer: %d\n", Computer);

    Total = English + Maths + Tamil + Social + Science + Computer;
    printf("Total: %d\n", Total);
    avg = (float)(Total /6);
    printf("Average: %.2f\n", avg);

    if (avg >= 95) {
        printf("HOLY MOLLY SHIT! YOU GOT : O GRADE");
    } else if (avg >= 90) {
        printf("HOLY MOLLY SHIT! YOU GOT : A+ GRADE");
    } else if (avg >= 80) {
        printf("HOLY MOLLY SHIT! YOU GOT : A GRADE");
    } else if (avg >= 70) {
        printf("HOLY MOLLY SHIT! YOU GOT : B+ GRADE");
    } else if (avg >= 60) {
        printf("HOLY MOLLY SHIT! YOU GOT : B GRADE");
    } else if (avg >= 50) {
        printf("HOLY MOLLY SHIT! YOU GOT : C GRADE");
    } else if (avg >= 45) {
        printf("HOLY MOLLY SHIT! YOU GOT : D GRADE");
    } else if (avg >= 30) {
        printf("I AM HAPPY TO SAY YOU ARE FAIL!!!");
    }
    return 0;

    }





