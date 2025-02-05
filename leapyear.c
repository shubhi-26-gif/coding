#include<stdio.h>
void main(){
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("its a leap year");
    }
    else{
        printf("its not a leap year ");
    }
}