#include<stdio.h>
void main(){
    int R=4;
    int C=4;
    for(int row_num=1; row_num<=R;row_num++)
    {
       // for(int space=0; space<=R-row_num; space++)
       // {
        //    printf(" ");
       // }
        for(int C=1; C<=row_num;C++)
        {
            printf("%d",C);
        }
        printf("\n");
    }
}