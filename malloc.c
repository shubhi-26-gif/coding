#include<stdio.h>
#include<stdlib.h>
void main(){
    int*array=NULL;
    int size;
    printf("enter the array size\n");
    scanf("%d",&size);
    array=(int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        printf("enter the position number\n");
        scanf("%d",&array[i]);
    }
printf("array is here\n");
for(int i=0;i<size;i++){
    printf("%d, ",array[i]);
}){
}


    
}