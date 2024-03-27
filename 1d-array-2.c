#include<stdio.h>

main()
{
	// Write a Program to find the average of a 1D array.
	
     int a[5];
     int i,sum=0,average;
     
     printf("enter array value=\n");
     
     for(i=0; i<5; i++)
     {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
	 }
	 
	 for(i=0; i<5; i++)
	 {
	 	sum=sum+a[i];
	 }
	 
	 average=sum/i;
	 printf("the average of array=%d",average);
}