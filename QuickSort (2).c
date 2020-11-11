#include<stdio.h>
void swap(int a[], int i, int j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void quick_sort(int a[], int m, int n)
{
	int pivot,i,j;
	if(n>m)
	{
	pivot=a[m];
	i=m;
	j=n;
	
	do{
		do{
			i=i+1;
		}while(a[i]<pivot && i<n);
		do{
			j=j-1;
		}while(a[j]>pivot && j>=m);
		if(i<j)
		{
			swap(a, i, j);
		}		
	}while(i<j);
	swap(a, m, j);
	quick_sort(a, m, j-1);
	quick_sort(a, j+1, n);
}
}


void display(int a[], int size)
{
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%4d",a[i]);
		
	}
	
}

void main()
{ 
  int a[20];
 
  int size,i;
  printf("---------WELCOME TO PROGRAMMING WORLD---------\n");
	printf("----------------------------------------------\n");
	printf("----------------------------------------------\n");
	printf("Enter the limit\n:>");
	scanf("%d",&size);
	printf("\nEnter the Elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
  quick_sort(a,0,size);
  display(a, size);
  //merge_sort(b,0,size);
   //display(b, size);
  
}
