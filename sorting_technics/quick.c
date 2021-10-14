#include<stdio.h>
void quicksort(int a[50],int l,int h);
int partition(int a[],int l, int h);
int main()
{
int i,j,n,a[50];
printf("enter the array size \n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("\n");
quicksort(a,0,n-1);
printf("after sort\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");

}
void quicksort(int a[],int l,int h)
{ 
	if(l<h)
	{
	int lock=partition(a,l,h);
	quicksort(a,l,lock-1);
	quicksort(a,lock+1,h);
	}
}
int partition(int a[],int l, int h)
{
	
	int pivot,start,end; 
	pivot=a[l];
	start=l;
	end=h;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{	int temp;
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
			//swap(a[start],a[end]);
		}
	}
		int temp;
		temp=a[l];
		a[l]=a[end];
		a[end]=temp;
	return end;
}
	
	


