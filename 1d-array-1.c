#include<stdio.h>

main()
{
	//Write a Program to find the length of a 1D array.
	
	int a[]={1,2,3,4,5,54,87,34,68,12,89};
	
	int length;
	
	length = sizeof(a)/sizeof(a[0]);
	
	printf("the length of the array is=%d",length);
	
}