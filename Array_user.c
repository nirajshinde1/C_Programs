#include <stdio.h>
int main()
{ 
    int size=0; 
    int arr[size]; 
    
	printf("Size of array :\n"); 
    scanf("%d",&size); 
    
	printf("Array is : \n"); 
    int i = 0;
	for(i =0; i< size; i++)
	{ 
        scanf("%d",&arr[i]);
    } 
    printf("The array  is \n"); 
	for(i =0; i< size; i++)
	{ 
        printf("%d",arr[i]);
    } 
    return 0; 
} 