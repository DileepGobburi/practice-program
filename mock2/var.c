#include"head.c"
void var(struct student s)
	{
		int *p;
		p =&s.ar[2][2][2];
		printf("the *p=%d\n",*p);
		
		int kk= *p;
		
		printf("var= %d\n", kk);
		
	pattern(kk);
		
	}
		
		


