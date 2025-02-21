#include<stdio.h>
int main(){
int num;
printf("enter any number:");
scanf("%d",&num);
if(num %2==0)
{
    printf("number is even");
}
else if(num%2==!0 && num%3==!0)
{
    printf("the number is prime");
}
else {
    printf("the number is odd");
}

}
