//Linear Search

#include<stdio.h>
void main()
{
	int a[20],i,n,item,loc=0;
	printf("\nEnter the size of the array:\n");
	scanf("%d",&n);
	
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to be searched:\n");
	scanf("%d",&item);

	/*while(a[loc]!=item)
	{
		loc=loc+1;
	}
	if(a[loc]==item)
	printf("Element found at index %d",loc+1);
	if(loc==n)
	printf("\nNot found");*/
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			printf("\nElement found at index %d",i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("\nElement %d not found",item);
	}
}
