#include<stdio.h>
int main( )
{
     int i, num;
     printf ("enter the number to print the table\n");
     scanf ("%d" , &num);
     printf ("The table of %d\n",num);
     for ( i=1;i<11;i++)
{
          printf("%dX%d=%d\n",num,i,num*i);
}
     return 0;
}

