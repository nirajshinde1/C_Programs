#include <stdio.h>
#pragma pack(1)

struct Date
{
	int i;
	float f;
	double b;
};
int main()
{
	struct Date obj;
	printf("%d\n",sizeof(obj));
	
	return 0;
}
