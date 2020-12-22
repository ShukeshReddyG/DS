#include<stdio.h>
int main()
{
	int h=8;
	int b=(h++,--h);
	printf("%d",b);
}
