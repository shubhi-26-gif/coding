#include<stdio.h>
void main()
{
int numX=5;
int numY=6;
int numZ=4;
//printf("enter your number");
//scanf("%d",&num A);
//printf("enter your number");
//scanf("%d",&num B);
//printf("enter your number");
//scanf("%d",&num C);
if(numX>numY && numX>numZ) 
{
    printf("%d",numX);
}
else if(numY>numZ && numY>numX)
{
    printf("%d",numY);
}
else{
    printf("%d",numZ);
}

}

