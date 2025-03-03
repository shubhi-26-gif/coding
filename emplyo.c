#include<stdio.h>
#include<string.h>
struct employment_detail
{
   char name[10];
   char department[10];
   char qualification[10];
   int salary;
   int phone number;

};


void main()
{
 
    struct employment_detail shubhi;
    struct employment_detail kirti;
    struct employment_detail vedika;

   printf("Enter Name : ");
   gets(shubhi.name);
   
    shubhi.roll_num = 25;
    shubhi.department= it field;
    shubhi.qualification= pass;
    shubhi.salary=50000;
    shubhi.phonenumber=23456;
    


    printf("Enter Name : ");
   gets(kirti.name);
    
    kirti.roll_num= 12;
    kirti.department=it field;
    kirti.qualification= pass;
    kirti.salary=500000;
    kirti.phonenumber=455555588689;
    
                                                                                                    
    printf("Enter Name : ");
    gets(vedika.name);
     
    vedika.roll_num= 1;
    vedika.department=it field;
    vedika.qualification= pass;
    vedika.salary=50000;
    vedika.phone=1234567890;


    printf("Name = %s \n Roll = %d \n department = %s \n qualification =%s\n salary =%d phone = %d\n" , shubhi.name, shubhi.roll_num, shubhi.department, shubhi.qualification , shubhi.salary,shubhi.phone);
    printf("---------------------\n");
    printf("Name = %s \n Roll = %d \n department = %s \n qualification =%s\n  salary =%d phone = %d\n", kirti.name, kirti.roll_num, kirti.department, kirti.qualification,shubhi.salary kirti.phone);
    printf("---------------------\n");
    printf("Name = %s \n Roll = %d \n department = %s \n   qualification =%s \n salary =%d phone = %d\n", vedika.name, vedika.roll_num, vedika.department, vedika.qualification, vedika.salary, vedika.phone);

    

}