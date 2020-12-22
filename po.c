#include<stdio.h>
int main()
{
	int a=4,b=5;
	b=a++ + a--;
	a= ++b + b--;
	printf("a--->%db------>%d", a, b);
}
