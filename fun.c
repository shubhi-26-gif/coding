#include<stdio.h>
int isodd(int num){

if(num%2==0){
    return 1;
}
else
{
    return 0;
}
};
void main()
{
    int num, x;
    printf("enter the value\n");
    scanf("%d,"&num);
    x=isodd(num);
    if(x){
        printf("number is even\n");
    }
else
{
    printf("number is odd");
}
}