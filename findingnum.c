#include<stdio.h>
void main(){
    char ch;
    printf("enter your number ");
    scanf("%C",&ch;);
    if((ch>= a&& ch<=z)||(ch>=A && ch<=Z)){
        printf("%c alphabet",ch);
    }
    else if (ch>=0 && ch<=9){
        printf("%c is digit",ch);
    }
else{
    printf("%c special character",ch);
}
}
