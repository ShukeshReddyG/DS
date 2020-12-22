#include<stdio.h>
int main()
{
	long int i,H,C,Q;
	scanf("%ld %ld %ld",&H,&C,&Q);
	long int ss1[C][3];
    for(i=0;i<C;i++)
	  scanf("%ld %ld %ld",&ss1[i][2],&ss1[i][0],&ss1[i][1]);
	for(i=0;i<Q;i++)
	{
		long int j,h,ss,f=0;
		scanf("%ld %ld",&h,&ss);
		if(ss<=0||ss>H)
		 printf("NO\n");
		 else
		 {
        for(j=0;j<C;j++)
		{
			if(ss>=ss1[j][0]&&ss<=ss1[j][1])
			{
				f=1;
                if(ss1[j][2]>=h)
				 printf("NO\n");
				 else
				 printf("YES\n");
				 break;
			}
		}
		if(f==0)
		printf("YES\n");
		 }
	} 
}