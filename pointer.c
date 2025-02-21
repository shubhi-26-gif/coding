#include<stdio.h>
void main(){
    int a =10,b=20;
    int*p=&a,*q=&b;
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
printf("a=%d,b=%d\n",a,b);
}