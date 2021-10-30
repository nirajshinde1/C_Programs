#include<stdio.h>

void TimeTable(int iStd)
{
	if(iStd == 1)
	{
		printf("Your Exam is at : 11 AM\n");
	}
	else if(iStd == 2)
	{
		printf("Your Exam is at : 12 NOON\n");
		
	}
	else if(iStd == 3)
	{
		printf("Your Exam is at : 1 PM\n");
		
	}
	else if(iStd == 4)
	{
		printf("Your Exam is at : 2 PM\n");
		
	}
	else
	{
		
		printf("Wrong standard\n");
	}
}

int main()
{
	int iValue = 0;
	
	
	printf("Enter your standard :\n");
	scanf("%d",&iValue);
	
	TimeTable(iValue);
	return 0;
}
