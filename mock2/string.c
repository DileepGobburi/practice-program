#include"head.c"
int my_strcmp(char *m,char *n)
{
	if(*m=='\0' && *n=='\0')
		return count;

	if(*m==*n)
	{
		m++;
		n++;
		count++;
		return my_strcmp(m,n);
	}
	else
		return -1;  
}



