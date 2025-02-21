#include<stdio.h>
void main()
{
int num;
printf("enter your number");
scanf("%d",&num);
if(num<0)
{
    printf("negative");
}
else if(num>0)
{
    printf(" positive");
}
else{
    printf(" zero");
}

}

