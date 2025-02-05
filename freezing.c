#include<stdio.h>
void main(){
    int temp;
    printf("enter your tempearture");
    scanf("%d",&temp);
    if(temp<0){
        printf("its a freezing weather\n");
    }
    else{
        printf("not cold enough");
    }
}
