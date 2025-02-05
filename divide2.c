#include<stdio.h>
int main(){
int num;
printf("enter any number:");
scanf("%d",&num);
if(num %5==0 && num%3==0)
{
    printf("number is divisible by 5 and 3\n");
}
else
{
    printf("number is not divisible");
}
}