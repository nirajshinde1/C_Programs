#include<stdio.h>
void fun()
{
	printf("Iniside fun");
}

int add(int no1, int no2)
{
	int ans = 0;
	ans = no1+no2
	return ans;
}

struct demo
{	struct demo *p = NULL;
	struct demo *q = NULL;
	void (*p)();
	int (*q)(int,int);
}obj;

int main()
{
	int ret = 0;
	
	obj.p = fun();
	obj.q = add();
	ret = obj.q(6,5);
	printf("%d\n",ret);
	obj.p();
	return 0;
}