#include<stdio.h>
void main(){
    int matrix[2][3]={{0,11,3},
                      {1,3,4} };
    for(int i=0;i<2;i++){
    printf("[");
    for(int j=0;j<3;j++)
    {
        printf("%d, ",matrix[i][j]);
    }
    printf("]");
    printf("\n");
    }
}