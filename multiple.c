#include<stdio.h>
int main(){
int num;
printf("enter any number:");
scanf("%d",&num);
if(num%7==0)
{
    printf("number is multiple of 7");
}
else
{
    printf("number is not a multiple of 7");
}
}