#include<stdio.h>
int subtract(int A,int B);
void main(){
//int C=subtract(4,3);
printf("%d\n",subtract(100,7));
printf("%d\n",subtract(88,7));
printf("%d\n",subtract(5,7));
printf("%d\n",subtract(18,8));

}
int subtract(int A,int B)
{
    return A-B;
}