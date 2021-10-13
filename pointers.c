//*********DAY1****

/*C program to add two numbers using pointers
 '&' is the address of operator and '*' is value at the address operator.*/
/*#include <stdio.h>

int main()
{
   int x, y, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &x, &y);

   p = &x;
   q = &y;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}*/
//swap two numbers using pointers
/*#include <stdio.h>

int main()
{
   int x, y, *a, *b, temp;

   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   
   a = &x;
   b = &y;
   
   temp = *b;
   *b   = *a;
   *a   = temp;

   printf("After Swapping\nx = %d\ny = %d\n", x, y);
   
   return 0;
}*/
/*#include <stdio.h>
#define max_size 50

 void display_arr(int *arr, int size){
   int i;
   for(i=0; i<size; i++){
    printf("%d ", *(arr + i));
   }
 }
 
int main(){
 
 int arr1[max_size], arr2[max_size];
 int n,i;
 
 int *ptr1 = arr1; //Pointing to arr1
 int *ptr2 = arr2; //Pointing to arr2
 int *last_arr; //pointing last element of arr1
 
 printf("Enter size of array: \n");
 scanf("%d", &n);

 printf("input arr1 elements: \n");
 for(i=0; i<n; i++){
    scanf("%d", ptr1 + i); 
 }
  last_arr=&arr1[n-1];
 printf("\narr1 elements before coping: ");
 display_arr(arr1, n);
 
 printf("\narr2 elements before coping:");
 display_arr(arr2, n);
 
 while(ptr1 <= last_arr){
   *ptr2 = *ptr1;
    ptr1++;
    ptr2++;
 }

 
 printf("\narr1 elements after coping:");
 display_arr(arr1, n);
 
 printf("\narr2 elements after coping: ");
 display_arr(arr2, n);

 }*/


  /* swaps two arrays using pointers */
  /*#include <stdio.h>
  #include <stdlib.h>
  void swap(int *arr1, int *arr2, int n) {
        int i, temp;

        for (i = 0; i < n; i++) {
                temp = *(arr1 + i);
                *(arr1 + i) = *(arr2 + i);
                *(arr2 + i) = temp;
        }
        return;
  }

  int main() {
        int *arr1, *arr2, i, j, n;

      
        printf("Enter the size of the arrays:");
        scanf("%d", &n);

        arr1 = (int *) malloc(n*sizeof(int) );
        arr2 = (int *) malloc(n*sizeof(int));


        printf("Enter data for first array:\n");
        for (i = 0; i < n; i++) {
                scanf("%d", (arr1 + i));
        }


        printf("Enter data for second array:\n");
        for (i = 0; i < n; i++) {
      
                scanf("%d", arr2 + i);
        }
        swap(arr1, arr2, n);

        printf("Elements in first array:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", *(arr1 + i));
        }
        printf("\n");

        printf("Elements in second array:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", *(arr2 + i));
        }
        printf("\n");
        return 0;
  }*/
  //accessing 2d array using pointers
/*#include<stdio.h>
void fun(int r, int c, int *ptr);
int main()
  {
  	int arr[3][3],i,j;
  	int r=sizeof arr/sizeof arr[0];
  	int c=sizeof arr[0]/sizeof arr[0][0];
  	fun(r,c,(int*)arr);
  printf("elements in the 2d array\n");
  for(i=0;i<r;i++)
  	{
  	for(j=0;j<c;j++)
  		{
  			printf("%d",arr[i][j]);		
  		}
  		printf("\n");
  	}
  }
  void fun(int r, int c, int *ptr)
  {
  int i,j;
  printf("enter the elements in to 2d array\n");
  for(i=0;i<r;i++)
  	{
  	for(j=0;j<c;j++)
  		{
  			scanf("%d",ptr++);
  			
  		}
  	}
  }*/
  //matrix multiplication using pointer
/*#include <stdio.h>
#define R 3
#define C 3

void Input(int mat[][C]);
void Print(int mat[][C]);
void Multiply(int mat1[][C], int mat2[][C], int res[][C]);
int main() {
   int mat1[R][C];
   int mat2[R][C];
   int product[R][C];
   printf("Enter elements in first matrix of size 3x3\n");
   Input(mat1);
   printf("Enter elements in second matrix of size 3X3\n");
   Input(mat2);
   Multiply(mat1, mat2, product);
   printf("Product of both matrices is : \n");
   Print(product);
   return 0;
}
void Input(int mat[][C]) {
   int i,j;
   for (i= 0; i < R; i++) {
      for (j = 0; j < C; j++) {
         scanf("%d", (*(mat + i) + j));
      }
   }
}
void Print(int mat[][C]) {
   int i,j;
   for (i = 0; i < R; i++) {
      for (j = 0; j < C; j++) {
         printf("%d ", *(*(mat + i) + j));
         }
      printf("\n");
   }
}
void Multiply(int mat1[][C], int mat2[][C], int res[][C]) {
   int j,k,i;
   int sum;
   for (i= 0; i < R; i++) {
      for (j = 0; j < C; j++) {
         sum = 0;
         for (k = 0; k < C; k++) {
            sum += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));
         }
         *(*(res + i) + j) = sum;
      }
   }
}*/
//reverse the array elements using pointers
/*#include<stdio.h>
#define N 5
int main()
{
int a[N],*p;	
printf("enter the elements in to array\n");
for(p=a;p<=a+N-1;p++)
scanf("%d", p);
printf("after rversing the elements\n");
for(p=a+N-1;p>=a;p--)
printf(" %d", *p);
printf("\n");
}*/
//funtion pointer
/*#include<stdio.h>
int sum(int a, int b);
int main()
{
int (*ptr)(int,int);//int(*ptr)(int,int)=&sum;
ptr=&sum;	    //result=*ptr(7,6);	
printf("%d\n",ptr(3,4));//printf("%d",result);
}
int sum(int a, int b)
{
return a+b;
}	*/


 //**********DAY2******

//copy one string to other string using pointers
/*#include<stdio.h>

void copy_string(char*, char*);

int main()
{
    char s[100], d[100];    
    printf("Enter source string\n");    
    scanf("%s",s);    
    copy_string(d, s);    
    printf("destination string is:%s\n", d);    
    return 0;
}

void copy_string(char *d, char *s)
{
    while(*s)
    {
        *d = *s;        
        s++;        
        d++;
    }    
    *d = '\0';
}*/
//string concatenation using pointers
/*#include<stdio.h>

char*  copy_string(char*, char*);

int main()
{
    char s[100], d[100];    
    printf("Enter source string\n");    
    scanf("%s",s);    
    printf("enter destination string\n");
    scanf("%s",d);
   char* dest= copy_string(d, s);    
    printf("destination string is:%s\n", dest);    
    return 0;
}
char* copy_string(char *d, char *s)
{	int i,j;
	for(j=0;d[j];j++);
	for(i=0;s[i];i++,j++)
	d[j]=s[i];
	d[j]='\0';
	return d; 
}*/
//  BOTH STRINGS ARE QUAL USING POINTERS
#include<stdio.h>
int comp_string(char*, char*);
int count=0;
int main()
{
    char s[100], d[100];    
    printf("Enter source string\n");    
    scanf("%s",s);    
    printf("enter destination string\n");
    scanf("%s",d);
   int k= comp_string(d, s);    
    if(k>1)
    printf("both strings are equal\n");
    else
    printf("strings not equal\n");   
    return 0;
}
int comp_string(char *d, char *s)
{	if(*d=='\0'&& *s=='\0')
	return count;
	if(*d==*s)
	{
		d++;
		s++;
		count++;
		return comp_string(d,s);
	}
		return -1;
		
}
