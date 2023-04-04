#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={1,2,3,6,9};
    int c[]={1,5,3,9,11};
    int i,j,k,l,m,n;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                for(k=0;k<5;k++)
                {
                    if(a[i]==c[k])
                    {
                        printf("%d\n",a[i]);
                    }
                }
            }
        }
    }
    return 0;
    getch();
}
