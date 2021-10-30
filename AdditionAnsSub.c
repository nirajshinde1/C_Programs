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

int main()
{
	int iVal1 = 0, iVal2 = 0, iRet = 0,iRetsub;
	printf("Enter 1st No.:\n");
	scanf("%d",&iVal1);
	
	printf("Enter 2nd No.:\n");
	scanf("%d",&iVal2);
	
	iRet = add(iVal1,iVal2);
	printf("Addition is:%d\n",iRet);
	
	iRetsub = sub(iVal1,iVal2);
	printf("Substraction is:%d\n",iRetsub);
	
	return 0;
}