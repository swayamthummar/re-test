#include<stdio.h>
main()
{
	int n,rn,on,reminder;
	
	printf("Enter a number->");
	scanf("%d",&n);
	on=n;
	
	for(n,rn,on,reminder;n!=0;n/=10)
	{
		reminder=n%10;
		
		rn=rn*10+reminder;
	}
	printf("The reverse of %d is %d\n",on,rn);
	
	if(on==rn)
	{
		printf("%d is a palindrome number.\n",on);
	}
	else
	{
		printf("%d is not a palindreom number.",on);
	}
}
