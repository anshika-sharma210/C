#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct cr{ char *sec; char *name; int roll; struct cr *link;};
void main()
{
 int n;
struct cr mcaA,mcaA1,mcaB,mcaB1,mcaC,mcaC1;
struct cr *start[3];
 start[0]=&mcaA;
 start[1]=&mcaB;
 start[2]=&mcaC;
///////////////////////////////////////////////////////////////
mcaA.sec ="MCA SEC A";
mcaA.name ="VANSHITA";
mcaA.roll = 35;
mcaA.link = &mcaA1;
////////
mcaA1.sec ="MCA SEC A";
mcaA1.name ="VISHAL";
mcaA1.roll = 36;
mcaA1.link = NULL;
///////////////////////////////////////////////////////////////
mcaB.sec ="MCA SEC B";
mcaB.name ="GAURI";
mcaB.roll = 12;
mcaB.link = &mcaB1;
////////
mcaB1.sec ="MCA SEC B";
mcaB1.name ="YASH.A";
mcaB1.roll = 36;
mcaB1.link = NULL;
/////////////////////////////////////////////////////////////////////
mcaC.sec ="MCA SEC C";
mcaC.name ="VIDHI";
mcaC.roll = 37;
mcaC.link = &mcaC1;
////////
mcaC1.sec ="MCA SEC C";
mcaC1.name ="YASH.K";
mcaC1.roll = 42;
mcaC1.link = NULL;
////////////////////////////////////////////////////////////////////
Anshika: printf("\n\nCR INFO OF MCA DEPARTMENT\n");
printf("ENTER SECTION\n");
printf(" SEC A = 1\n SEC B = 2\n SEC C = 3\n EXIT =n>3\n===>");
scanf("%d",&n);
 if(n>3) exit(0);
 else
 while(start[n-1]!=NULL)
 {
 printf("\n *NAME = %s",start[n-1]->name);
 printf("\n *SECTION = %s",start[n-1]->sec);
 printf("\n *Roll Number = %d\n",start[n-1]->roll);
 start[n-1]=start[n-1]->link;
 } goto Anshika;
getch();
}
