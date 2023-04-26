#include<stdio.h>
main()
{
	int n,fd,ld,ans;
	fd=n;
	printf("Enter a number->");
    scanf("%d",&n);
    
    while(fd>=10)
    {
    	fd=fd/10;
	}
	ld=ld%10;
	
	ans=fd+ld;
	
	printf("Sum of first & last number->%d",ans);
}
