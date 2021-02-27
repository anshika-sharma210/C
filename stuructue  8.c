#include<stdio.h> 
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct student { char name[30]; int roll; float fees; };

void  main()
{ struct student s[20];
   strcpy(s[0].name,"MADHUR");  s[0].roll=1; s[0].fees=1.36;    strcpy(s[10].name,"RAJ");      s[10].roll=11; s[10].fees=1.36;                       
   strcpy(s[1].name,"Anshika");     s[1].roll=2; s[1].fees=1.36;   strcpy(s[11].name,"PRABHAT");  s[11].roll=12; s[11].fees=1.36;
   strcpy(s[2].name,"APARNA");   s[2].roll=3; s[2].fees=1.36;   strcpy(s[12].name,"VAIBHAV");  s[12].roll=13; s[12].fees=1.36;
   strcpy(s[3].name,"VIDHI");    s[3].roll=4; s[3].fees=1.36;   strcpy(s[13].name,"ASHUTOSH"); s[13].roll=14; s[13].fees=1.36;
   strcpy(s[4].name,"ASHWANI");  s[4].roll=5; s[4].fees=1.36;   strcpy(s[14].name,"ARUN");     s[14].roll=15; s[14].fees=1.36;
   strcpy(s[5].name,"ADITI");    s[5].roll=6; s[5].fees=1.36;   strcpy(s[15].name,"VISHAL");   s[15].roll=16; s[15].fees=1.36;
   strcpy(s[6].name,"PRAKHAR");  s[6].roll=7; s[6].fees=1.36;   strcpy(s[16].name,"ABHISHEK"); s[16].roll=17; s[16].fees=1.36;
   strcpy(s[7].name,"VYOM");     s[7].roll=8; s[7].fees=1.36;   strcpy(s[17].name,"RUDRA");    s[17].roll=18; s[17].fees=1.36;
   strcpy(s[8].name,"KP");       s[8].roll=9; s[8].fees=1.36;   strcpy(s[18].name,"SNEHA");    s[18].roll=19; s[18].fees=1.36;
   strcpy(s[9].name,"DIVYANSHU");s[9].roll=10;s[9].fees=1.36;   strcpy(s[19].name,"PALAK");    s[19].roll=20; s[19].fees=1.36;

   Anshika: printf("\n  TO exit the program press number higher than 20\n");
         printf("\n\tTO access students data"); 
                     int n=0;
          printf("\nEnter Student Roll number ==> "); scanf("%d",&n); 

if(n>20)printf("No such roll number");
if(n>20) exit(0);
else  
   {
     printf("Student details =>\n");
      printf("\n student name => %s",s[n-1].name);
       printf("\n student roll => %d",s[n-1].roll); 
        printf("\n student Fees => %.2f",s[n-1].fees);  
   }  goto Anshika;                                            
 getch();
}

