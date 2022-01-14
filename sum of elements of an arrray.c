#include<stdio.h>
main()
{
	int a[5],n=5,i,sum=0;//here we can give the different value of size(n)
//	printf("how many terms you wants add");
//	scanf("%d",&n);
	printf("enter the element of array");
	for(i=1;i<=n;i++)//elements are scan by for loop
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	    sum=sum+a[i];//add all the element of array and assigne in sum
	}
printf("the sum of an array element is %d",sum);//take sum as output
}
