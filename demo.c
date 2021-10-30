#include<stdio.h>
extern int i;
extern void fun();
extern int j;
extern int arr[4];
int i = 21;
void gun()
{
printf(“Inside gun”);
}
int main()
{
printf(“Value of i is %d”,i);
printf(“Value of j is %d”,j);
j = 51;
printf(“Value of j is %d”,j);
printf(“Value from array %d”,arr[0]);
fun();
gun();
return 0;
}
