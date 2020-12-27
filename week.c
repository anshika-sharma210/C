#include<stdio.h> 
int main(int argc, char const *argv[]) 
{     
int n;   
printf("enter any no");    
scanf("%d",&n);     
switch(n) 
    {       
case 1:printf("sunday");    break;       
case 2:printf("monday");    break;     
case 3:printf("tuesday");   break;
case 4:printf("wednesday"); break;        
 case 5:printf("thursday");  break;         
 case 6:printf("friday");    break;      
 case 7:printf("satuarday"); break; 
 default: printf("wrong no entered"); 
  }     
   return 0;
} 

