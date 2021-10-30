#include<stdio.h>

void IncomeTax(long int lInc)
{	double tax;
	if(lInc >= 0 && lInc <=300000)
	{
		printf("You have no taxable amount\n");
	}
	else if(lInc >= 300001 && lInc<= 500000)
	{
		tax = (0.10*lInc);
		printf("Your Taxable amount is: %f \n",tax);
		
	}
	else if(lInc >=  500001 && lInc <= 1000000)
	{
		tax = (0.20*lInc);
		printf("Your Taxable amount is:%f \n",tax);
		
	}
	else if(lInc >= 1000001 && lInc <= 2000000)
	{
		tax = (0.30*lInc);
		printf("Your Taxable amount is:%f \n",tax);
		
	}
	else if(lInc >= 1500001 && lInc <= 10000000)
	{
		tax = (0.40*lInc);
		printf("Your Taxable amount is:%f \n",tax);
		
	}
	else
	{
		
		printf("invalid\n");
	}
}

int main()
{
	long int iValue = 0;
	
	
	printf("Enter your income\n");
	scanf("%d",&iValue);
	
	IncomeTax(iValue);
	return 0;
}
