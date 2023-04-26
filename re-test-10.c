#include<stdio.h>
main()
{
	int i,o,s;
	for(o=5;o>=1;o--)
     {
       for(i=1;i<=o;i++)
       {
       		printf("%d",i);
	   }
	   
	   for(s=5;s>o;s--)
	   {
	   	printf("  ");
	   }
	   for(i=o;i>=1;i--)
	   {
	   	printf("%d",i);
	   }
	   printf("\n");
	 }
	 
}
