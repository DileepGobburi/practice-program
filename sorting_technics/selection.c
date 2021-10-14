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
		for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
	}
printf("elements after bubble sort\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
}

