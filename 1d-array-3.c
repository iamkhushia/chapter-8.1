#include<stdio.h>

main()
{
	// Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.
	
	int n,i;
	printf("size of array element=");
	scanf("%d",&n);
	
	int a[n],b[n],sum[n];
	
	printf("enter A array element=\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
		printf("enter B array element=\n");
	for(i=0; i<n; i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	printf("sum of 2 array=");
	for(i=0; i<n; i++)
	{
		sum[i]=a[i]+b[i];
		printf("%d ",sum[i]);
	}
}