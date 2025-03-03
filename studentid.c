
#include<stdio.h>
#include<string.h>
struct id_card 
{
   char name[10];
   int roll_num;
   int class;
   int phone;
};


void main()
{

    struct id_card  shubhi;
    struct id_card  kannu;
    struct id_card  sara;

   printf("Enter Name : ");
   gets(shubhi.name);
   
shubhi.roll_num = 25;
shubhi.class= 12;
shubhi.phone= 56737384848;


    printf("Enter Name : ");
   gets(kannu.name);
    
    kannu.roll_num= 12;
    kannu.class=12;
    kannu.phone=1234567890;
    
    
                                                                         
    printf("Enter Name : ");
    gets(sara.name);
     
    sara.roll_num= 1;
    sara.class=12;
    sara.phone=1234567890;


    printf("Name = %s \n Roll = %d \n class = %d \n  phone = %d\n", shubhi.name, shubhi.roll_num, shubhi.class, shubhi.phone);
    printf(".........................\n");
    printf("Name = %s \n Roll = %d \n class = %d \n  phone = %d\n", kannu.name, kannu.roll_num, kannu.class, kannu.phone);
    printf("..........................\n");
    printf("Name = %s \n Roll = %d \n class = %d \n  phone = %d\n", sara.name, sara.roll_num, sara.class, sara.phone);


}