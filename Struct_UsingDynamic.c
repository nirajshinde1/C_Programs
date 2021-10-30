#include <stdio.h>
#pragma pack(1)

struct hello
{
	float f;
	int i;

};
int main()
{
	struct hello obj[5];
	struct hello *ptr = NULL;
	ptr = (struct hello *)malloc(sizeof(obj[5]));
	
	ptr->f = 3.14;		
	ptr->i = 20;
	printf("%d\n",sizeof(obj[5]));

	printf("%f\n",ptr->f);
	printf("%d\n",ptr->i);

	return 0;
}
