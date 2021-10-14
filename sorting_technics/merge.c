#include<stdio.h>
void mergesort(int a[],int l,int h);
void merge(int a[],int l,int mid,int h);
int main()
{
int a[40],i,n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n;i++)	
printf(" %d",a[i]);
printf("\n");
mergesort(a,0,n-1);
printf("sorted elements\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
return 0; 
}
void mergesort(int a[],int l,int h)
{
int mid;
if(l<h)
{
	mid=(l+h)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,h);
	merge(a,l,mid,h);
}
}
void merge(int a[],int l,int mid,int h)
{
int i,j,k,b[50];
i=l,j=mid+1,k=l;
while(i<=mid && j<=h)
{
	if(a[i]<=a[j])
	{
	b[k]=a[i];
	i++,k++;
	}
	else
	{
	b[k]=a[j];
	j++,k++;
	}
}
	
	if(i>mid)
	{
		while(j<=h)
		{
			b[k]=a[j];
			j++,k++;
		}
	}
	else
	{
	while(i<=mid)
	{
		b[k]=a[i];
		i++,k++;
	}
	}
for(k=l;k<=h;k++)
{
	a[k]=b[k];
}
}
	

