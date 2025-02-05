#include<stdio.h>
int main(){
int age;
printf("enter your age:");
scanf("%d",&age);
if (age>18)
{ 

    printf("you can vote%d\n",age);
}
else
{
    printf("sorry you cannot vote\n");
}

}