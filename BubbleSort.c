//Bubble Sort

#include<stdio.h>
#include<stdlib.h>

void bubblesortasc(int *a,int n)
{
	int j,k,temp;
	for(k=1;k<n;k++)
	{
		for(j=0;j<n-k;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void bubblesortdsc(int *a,int n)
{
	int j,k,temp;
	for(k=1;k<n;k++)
	{
		for(j=0;j<n-k;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void display(int *a,int n)
{
	int i;
	printf("Your Sorted array->:\n");
        for(i=0;i<n;i++)
        {
	         printf("%d\t",a[i]);
        }
}

int main()
{
	int i,n,j,min,max,c;
    int a[30],temp;
    
	printf("Enter the limit of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
	    scanf("%d",&a[i]);
    }
    while(1)
    {
    printf("\nEnter your choice \n1.Ascending  \n2.Descending \n3.Exit\n");
    scanf("%d",&c);
    switch(c)
    {
	    case 1:
	    	bubblesortasc(a,n);
	    	 display(a,n);
	    	break;
	    	
	    case 2:
	    	bubblesortdsc(a,n);
	    	display(a,n);
        break;
	    case 3:
	    	exit(0);
	}
	}
}
