#include<stdio.h>
#include<conio.h>
int main()
{
	long long int a;
	scanf("%d",&a);
	long long int f=1;
	while(a>0)
	{
		f=f*a;
		a=a-1;
	}
	printf("%d",f);
	return 0;
	getch();
}
