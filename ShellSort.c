//Shell Sort

#include<stdio.h>

void shell(int a[],int size)
{
	int temp,i,j,k;
	
	for(i=size/2;i>0;i=i/2)
	{
		for(j=i;j<size;j++)
		{
			for(k=j-i;k>=0;k=k-i)
			{
				if(a[k+i]>a[k])
				break;
				else
				temp=a[k];
				a[k]=a[k+i];
				a[k+i]=temp;
			}
		}
	}
}

void main()
{
	int n,size,a[20],i;
	printf("\nEnter the size of the array:\n");
	scanf("%d",&size);
	
	//printf("\nEnter the elements of the array:\n");
	for(n=0;n<size;n++)
	{	
		printf("Enter the array at position %d->\t",n+1);
		scanf("%d",&a[n]);
	}
	
	shell(a,size);
	
	printf("\nYour elements after sorting:\n");
	for(n=0;n<size;n++)
	{	
		printf("%d\t",a[n]);
	}
}
