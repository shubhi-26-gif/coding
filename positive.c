#include<stdio.h>
void main()
{
int num;
printf("enter your number");
scanf("%d",&num);
if(num<0)
{
    printf("your number is negative");
}
else if(num>0)
{
    printf(" your number is positive");
}
else{
    printf("your number is zero");
}

}