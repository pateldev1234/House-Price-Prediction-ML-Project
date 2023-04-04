#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={2,4,6,8,10,12,14,16,18,20};
	int b[]={5,10,15,20,25};
    int i=0,j=0;
    while(i<10 && j<5)
    {
    	if(a[i]>b[j])
    	{
    		printf("%d\t",b[j++]);
		}
		else if (a[i]<b[j])
		{
			printf("%d\t",a[i++]);
			
			
		}
		else
		{
		printf("%d\t",b[j++]);
		i++;
		}
	}
	while(i<10)
	{
		printf("%d\t",a[i++]);
	}
	while(j<5)
	{
		printf("%d\t",b[j++]);
	}
return 0;
getch();
}
