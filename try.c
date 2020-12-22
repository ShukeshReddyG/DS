#include<stdio.h>
int main()
{
	int a[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!=a[i][j+1] && j+1!=3 && i+1!=2)
			{
			      printf("no");
				printf("\n");
				printf("%d %d",i,j);
				printf("\n");	
			}
			else
			{
			 printf("yes");
                         printf("\n");

			}
		}
	}

}
