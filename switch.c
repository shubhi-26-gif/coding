#include<stdio.h>
void main(){
    int n;
    int A ,B,result;
    printf("enter\n 1.add\n 2.subtract\n3.multiply\n");
    scanf("%d,"&n);
    printf("enter your num A:");
    scanf("%d",A);
    printf("enter your num B:");
    scanf("%d",B);

    switch(n){
        case 1:
        result=A+B;
        printf("%d",result);
        break;

        case 2:
        result=A-B;
        printf("%d",result);
        break;

        case 3:
        result=A*B;
        printf("%d",result);
        break;

        default
        printf("you choose wrong num");
        break;
    }

}