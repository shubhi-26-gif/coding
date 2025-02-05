#include<stdio.h>
void main(){
    int numA,numB,result;
    printf("enter your first number\n");
         scanf("%d",&numA);
    printf("enter your second number\n");
        scanf("%d",&numB);
        if(numA+numB>100){
            printf("your number is greater than 100");
        }
    else{
        printf("number is not greater than 100");
    }
}