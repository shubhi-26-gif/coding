#include<stdio.h>
void main(){
    int numA;//numA =2
    int numB;// numB=3
    int numC;
    printf("number a ");
    scanf("%d",&numA);
    printf("number b");
    scanf("%d",&numB);
    numC=numB;
    numB=numA;
    numA=numC;
} printf("numA=%d\n numB=%d\n",numA,numB);