#include <stdio.h>
void main(){
    int a = 12;
    double b = 1.0;
    char c = 'abcdefg';
    float d = 4.056;
    long long e = 3.350;
    long double f = 154.0;
    short int i = 0;
    printf(" int a: %f Have a data type of %lu \n",a,sizeof(a));
    printf(" double b: %f Have a data type of %lu \n",b,sizeof(b));
    printf(" char c: %f Have a data type of %lu \n",c,sizeof(c));
    printf(" float d: %f Have a data type of %lu \n",d,sizeof(d));
    printf(" long long e: %f Have a data type of %lu \n",e,sizeof(e));
    printf(" long double f: %f Have a data type of %ul \n",f,sizeof(f));
    printf(" short int i: %d Have a data type of %ul \n",i,sizeof(i));
}