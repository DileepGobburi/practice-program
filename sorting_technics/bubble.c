#include<stdio.h>
int main()
{
int a[50],n,temp,i,j;
printf("enter the array size\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("elements before sort\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
	}
printf("elements after bubble sort\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
}

