#include<conio.h>
#include<stdio.h>
int main()
{
 int a,b,c,d;
 char ch,name[10];
 float sum,total;

 printf("Enter you name Sir/Ma'am = ");
 scanf("%s",&name);
 printf("Hellow %s could you please enter your salary = ",name);
 scanf("%d",&a);
 if(a<=10000)
  b=10;
  else 
  b=15;
 
printf("Thank You %s . \nplease verifiy that you were a smoker or not enter 1 for yes and 2 for no = ",name);
scanf("%d",&d);

switch(d)
{
case 1:                          
    printf("So you were a somker.As per government rule we will diduct %d percent from your salary", b);
 
     sum=(a*b)/100;
     total=a-sum;
     printf("\nhere is your final salary %s",name);
     printf("=== %f",total);
break;
case 2:                           
    printf("So you were a non somker.As per government rule we will give %d percent in your salary", b);
      sum=(a*b)/100;
      total=a+sum;
     printf("\nHere is your final salary %s",name);
     printf("\t=== %f",total);
 break;
}
 return 0;
}
