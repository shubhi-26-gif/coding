#include<stdio.h>
void(){
    int R=5;
    int C=5;
    for(int row_num=0; row_num<=R;row_num++)
    {
        for(int space=0; space<=R-row_num; space++)
        {
            printf(" ");
        }
        for(int C=0; C<=row_num;C++)
        {
            printf("*");
        }
        printf("\n")
    }
}