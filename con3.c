#include<stdio.h>
void main(){
    int num1;
    int num2;
    printf("enter your first cordinate");
    scanf("%d",&num1);
    printf("enter your second cordinate");
    scanf("%d",&num2);
    if(num1>0 && num2>0){
        printf("%d %d lies in 1 quadrant",num1,num2);
    }
    else if(num1<0 && num2>0){
        printf("%d %d lies in 2 quadrant",num1,num2);
    }
    else if(num1<0 && num2<0){
        printf("%d %d lies in 3 quadrant",num1,num2);
    }
    else if (num1>0 && num2<0){
        printf("%d %d lies in 4 quadrant",num1,num2);
       }
    else{
        printf("origin");
    }

}