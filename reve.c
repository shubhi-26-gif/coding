#include<stdio.h>
void main(){
    int num,reversednum=0;
    printf("enter number");
    scanf("%d",&num);
     int remainder;
    while(num!=0){
        remainder=num%10;
        reversednum=reversednum*10+remainder;
       // num/=10;
       num=num/10;
    }
    
    printf("reversednum=%d\n",reversednum);
}