#include"head.c"
void pattern(int x)
	{
		int i,j,k;
		printf("x=%d\n",x);
		if(x%10==0)
			goto label;
		else
		{
			printf("not div by 10\n");
			return ;
		}
		
		label:
		printf("pattern\n");	
		for(i=0;i<=4;i++)
			{
				for(k=0;k<4-i-1;k++)
				printf(" ");
				
					for(j=0;j<i+1;j++)
						{
							char ch='a';
							printf("%c",ch+j);
						}
					printf("\n");
					//break;
				}
		
		if(x%2==0)
			{	
				printf("enter string 1\n");
				scanf("%s",str1);
	
				printf("Enter string 2 \n ");
				scanf(" %s",str2);
		
				int len= my_strcmp(str1,str2);
		
				if(len>1)
				printf("String is same\n");
				else
				printf("String is not same\n");
			}
			else  //odd
				{   	
					printf("\n ...TREE...\n");
					tree();
				} 
	  		
			
	}

