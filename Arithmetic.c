#include<stdio.h>

int add(int iNo1, int iNo2)
{
	int add;
	add = iNo1+iNo2;
	return add;
}
int sub(int iNo1, int iNo2)
{
	int sub;
	sub = iNo1-iNo2;
	return sub;
}
int mul(int iNo1, int iNo2)
{
	int mul;
	mul = iNo1*iNo2;

	return mul;
}
int div(int iNo1, int iNo2)
{
	int div;
	div	= iNo1/iNo2;

	return div;
}


int main()
{
	int iVal1 = 0, iVal2 = 0, iRet = 0,iRetsub, iMul = 0, iDiv = 0;
	printf("Enter 1st No.:\n");
	scanf("%d",&iVal1);
	
	printf("Enter 2nd No.:\n");
	scanf("%d",&iVal2);
	
	iRet = add(iVal1,iVal2);
	printf("Addition is:%d\n",iRet);
	
	iRetsub = sub(iVal1,iVal2);
	printf("Substraction is:%d\n",iRetsub);
	
	iMul = mul(iVal1,iVal2);
	printf("Multiplication is:%d\n",iMul);
	
	iDiv = div(iVal1,iVal2);
	printf("Division is:%d\n",iDiv);
	
	return 0;
}