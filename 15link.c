#include<stdio.h>
int main()
{
	int n;
	int i=0;
	int j;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	while(i<n)
	{
		if(arr[i]%2==0)
		{
          j=i;
		  while(arr[j]%2==0 && j<n)
		  
			  j++;
		  
		  for(int k=j-1;k>=i;k--)
		  
			  printf("%d ",arr[k]);
			  i=j;
		  
		}
		else
		{
			printf("%d ",arr[i]);
			i++;
		}
		
	}
	return 0;
}