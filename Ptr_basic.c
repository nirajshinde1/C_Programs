#include<stdio.h>
int main()
{
	char ch = 'A'; 
	char *p = &ch; 
	char **q = &p;
	char **x = &p; 
	char *y = &ch;
	printf("%ld\n",&ch);
	printf("%ld\n",p);
	printf("%ld\n",&p);
	printf("%ld\n",&q);
	printf("%d\n",y);
	printf("%c\n",**x);
	printf("%c\n",**q);
	printf("%lu\n",*q);
	return 0;
}