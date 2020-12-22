#include<stdio.h>
#include<stdlib.h>
int main()
{
int size , num , i , j ,t;
 int *x;
 scanf("%d",&size);
 x=(int *)malloc(sizeof(int)*size);
 for(i=0;i<size;i++)
 scanf("%d",&x[i]);
 for(i=1;i<size;i++)
{
 num=x[i];

 for(j=i-1;j>=0&&num<x[j];j--)

 x[j+1]=x[j];
 x[j+1]=num;
 for(t=0;t<size;t++)
 printf("%d ",x[t]);
 printf("\n");
 }
}
