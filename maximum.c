#include<stdio.h>

int Maximum(int iNo1, int iNo2)
{
	if(iNo1 > iNo2)
	{
		return iNo1;
	
	}
	else
	{
		return iNo2;
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter first number:\n");
	scanf("%d",&iValue1);
	
	printf("Enter Second number:\n");
	scanf("%d",&iValue2);
	
	iRet = Maximum(iValue1,iValue2);
	printf("Maximum Number is:%d\n",iRet);
	return 0;
}