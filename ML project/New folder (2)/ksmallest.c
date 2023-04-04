#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int z[a][b];
	int i,j,k;
	k=a*b;
	int c[k];
	int l,m,n,key;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&z[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",z[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	k=1;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			c[k]=z[i][j];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
	printf("\n");
	for(l=1;l<k;l++)
	{
		key=c[l];
		m=l-1;
		while(m>0 && c[m]>key)
		{
			c[m+1]=c[m];
			m=m-1;
		}
		c[m+1]=key;
		
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
	scanf("%d",&n);
	printf("%d",c[n]);
}
