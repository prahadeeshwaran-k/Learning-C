#include <stdio.h>
#include <stdlib.h>
int list[5],i,n=0;

void creat();
void insert(int x,int p);
void delete(int p);
void display();

void main(){
    int x,p,c;
    printf("---------------------LIST OF ADT USING ARRAY -------------------- ");
    while(1){printf("\nThe Operations are:");
    scanf("%d",&c);
    switch(c){
        case 1:creat();break;
        case 2:{
            printf("--------------------------------");
            printf("Enter the number of elements and Position: ");
            scanf("%d,%d",&x,&p);
            insert(x,p);
            break;
        }
        case 3:{printf("--------------------------------");
        printf("Enter the number of elements and Position to be Deleted: ");
        scanf("%d,%d",&x,&p);
        delete(p);
        break;}
        case 4:{printf("--------------------------------");
        display();break;}
        case 5:
            exit(0);
        default:{printf("--------------------------------");
        printf("Enter valid Choice: ");
        break; }

    }
}

}


void creat(){
    int e,i;
    printf("\nEnter The Number of Elements");
    scanf("%d",&e);
    printf("\nEnter The Elements");
    for (i=0;i<e;i++){
        n =e;
    }
}


void insert(int x,int p){
    if(n==5)
        printf("\nList Overflow");
    else if((p<0)||(p>n))
        printf("\nPosition is Invalid");
    else{
        for (i = n - 1; i >= p; i--)
            list[i + 1] = list[i];

    }list[p] = x;
    n++;
}


void delete(int p){
    if(p==0)
        printf("\nList Underflow");
    else if ((p<0)||(p>n-1)){
        printf("\nPosition is Invalid");
    }
    else{
        for (i=p;i<n;i++){list[i] = list[i+1];}
        n++;
    }
}


void display() {
    int p ;
    if (n==0)
        printf("\nList Empty");
    else{
        printf("The element presnt i the list are:\n");
        printf("\nElement\tPosition\n\n");
        for (p=0;p<n;p++) { printf("%d\t%d\n\n",list[p],p);}
    }
}