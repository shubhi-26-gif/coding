#include<stdio.h>
void main()
{
    int array[100] ={2,1,3,5};
    int i;
    int element;
    int size=4;
    
    printf("Before insertion\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\n",array[i] );
    }
    printf("enter the num you want to insert at end\n");
    scanf("%d",&element);

    for(int i=size-1;i>=0;i--){
        array[i+1]=array[i];
    }
    array[0]=element;
   printf("Array after insertion: ");
   for (int i = 0; i <=size; i++) {
       printf("%d ", array[i]);
   }
   }
