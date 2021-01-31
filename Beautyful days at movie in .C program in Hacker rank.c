#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,count=0,value,rev=0,tmp;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    for(int x=i;x<=j;x++)
    {
        value=x;
        rev=0;
        while(value!=0)
        {
            rev=rev*10;
            rev=rev+value%10;
            value=value/10;
        }
        tmp= abs(x-rev);
        if (tmp%k==0 )
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
