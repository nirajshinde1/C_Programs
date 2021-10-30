
#include<stdio.h>


struct demo
{
	int i;
	float f;
	double d;
}dobj = {11,3.14,10.505678};

int main()
{

    printf("%d,%f,%lf\n",dobj.i,dobj.f,dobj.d);
	
    
    return 0;
}
