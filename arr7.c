#include<stdio.h>
int add(int iNo1, int iNo2)
{
	double arr [] = {12.3,1.23,12.8};
	double *p = arr;
	char *q = &(arr[0]);
	char *r = &(arr[3]);
	
	printf("%d\n",&arr[0]);
	printf("%d\n",*q);
	printf("%d\n",*p);
	printf("%d\n",*r);
	return 0;
}