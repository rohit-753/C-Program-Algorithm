//Quick Sort and Merge sort Combined


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
	i=m+1;
	j=n;

	do{
		do{
			i=i+1;
		}while(a[i]<pivot);
		do{
			j=j-1;
		}while(a[j]>pivot);
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
void merge(int a[], int m, int mid, int n)
{
	int b[50];
	int i, j, k;
	k=m;
	i=m;
	j=mid+1;
	while(i<=mid && j<=n)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=n)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=m; i<=n; i++)
	{
		a[i]=b[i];
	}
}
void merge_sort(int a[], int m, int n)
{
	int mid;
	if(m<n)
	{
		mid=(m+n)/2;
		merge_sort(a, m, mid);
		merge_sort(a, mid+1, n);
		merge(a, m, mid, n);
	}
}

void main()
{
  int size, i, size2;
  printf("Enter the Size of Array QS:");
  scanf("%d",&size);
  int a[size];
  printf("\nEnter elements in array:\n");
  for(i=0;i<size;i++)
  {
      printf(":>");
      scanf("%d",&a[i]);
  }
  quick_sort(a,0,size);
  display(a, size);

  printf("\nEnter the Size of Array MS:");
  scanf("%d",&size2);
  int b[size2];
  printf("\nEnter elements in array:\n");
  for(i=0;i<size2;i++)
  {
      printf(":>");
      scanf("%d",&b[i]);
  }

  merge_sort(b,0,size2);
  display(b, size2);

}


