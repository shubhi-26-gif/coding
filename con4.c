#include<stdio.h>
void main(){
    char ch;
    printf("enter your grade");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='A'){
        printf("%c average",ch);
    }
    else if( ch=='E'|| ch=='e'){
        printf("%c excellent",ch);
    }
    else if(ch=='f'|| ch=='F'){
        printf("%c fail",ch);
    }
    else if(ch=='g'|| ch=='G'){
        printf("%c good",ch);
    }
    else if(ch=='v'|| ch=='V'){
        printf("%c very good",ch);
    }
    else{
        printf("wrong character");
    }
}