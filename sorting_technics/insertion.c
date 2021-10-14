#include<stdio.h>
int main()
{
int i,j,n,temp,a[50];
printf("enter the array size\n");
scanf("%d",&n);
printf("enter the elements in to array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
	}
printf("elements after sorting\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
}

