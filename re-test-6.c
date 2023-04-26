#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	printf("enter the value for A->");
	scanf("%d",&a);
		printf("enter the value for B->");
	scanf("%d",&b);
		printf("enter the value for C->");
	scanf("%d",&c);
		printf("enter the value for D->");
	scanf("%d",&d);
		printf("enter the value for E->");
	scanf("%d",&e);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("A is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				if(c>d)
				{
					if(c>e)
					{
						printf("C is max");
					}
					else
					{
						printf("E is max");
					}
				}
				
			}
		}
	}
	else
   { 
	if(b>d)
	{
		if(b>c)
		{
			if(b>e)
			{
				printf("B is max");
			}
			else
			{
				printf("E is max");
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				printf("D is max");
			}
		}
	}
	else
	{
		if(d>e)
		{
		  	if(c>d)
			{
				if(c>e)
				{
					printf("C is max");
				}
				else
				{
					printf("E is max");
				}
			}
			else
			{
				printf("D is max");
			}
		}
	}
 }
}

