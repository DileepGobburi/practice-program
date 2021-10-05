#include"header.h"
int main()
{
	int x,y;
	float r;
	printf("enter the  length and breadth  x,y for area of rectangle\n");
	scanf("%d %d",&x,&y);
	int a =area_rect(&x,&y);
	printf("area of rectangle=%d\n",a);	
	printf("enter the radius for area of circle\n");
	scanf("%f",&r);
	float b =area_circle(&r);
	printf("area of circle = %f\n",b);
}


