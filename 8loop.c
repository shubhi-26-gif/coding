#include<stdio.h>
void main (){
    int i=1;
    int a=0;
    int b=1;
    int c;
    printf("%d,",a);
    printf("%d,",b);
    while(i<11)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
        i++;
    }
    
}