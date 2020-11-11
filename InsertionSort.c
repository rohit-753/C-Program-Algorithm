#include<stdio.h>
#include<stdlib.h>

void InsertionInAscending(float A[],int n);
void InsertionInDescending(float A[],int n);
void DISPLAY(float A[],int n);

int main()
{
	int i,j,n,ch;
	float A[20];
	printf("Enter the LIMIT:-> ");
	scanf("%d",&n);
	n=n+1;
	printf("\nEnter Elements:-> ");
	for(i=1;i<n;i++)
		scanf("%f",&A[i]);
	while(1)
	{
		printf("\n1. Ascending\n2. Descending\n3. Exit\n\nEnter your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : 
				InsertionInAscending(A,n);      //calling insertion function in ascending order.
				DISPLAY(A,n);						//calling display function
				break;
			case 2 :
				InsertionInDescending(A,n);		//calling insertion function in descending order.
				DISPLAY(A,n);						//calling display function.
				break;
			case 3 : 
				exit(1);
						
			default : printf("\nWrong Choice");

		}
	}
	return 0;
}

void InsertionInDescending(float A[],int n)			//defining the insertion in descending function.
{
	int i,j;
	float k;
	for(i=1;i<n;i++)
	{
		j=i-1;
		k=A[i];
		A[0]=k;
		while(A[j]<k)      // arrange in descending
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=k;
	}
}

void InsertionInAscending(float A[],int n)				//defining the insertion in ascending function.
{
	int i,j;
	float k;
	for(i=1;i<n;i++)
	{
		j=i-1;
		k=A[i];
		A[0]=k;
		while(A[j]>k)         //arrange in ascending
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=k;
	}
}	

void DISPLAY(float A[],int n)			//defining the display function.
{
	int i;
	printf("\nElements in Sorted Order : ");
	for(i=1;i<n;i++)
	{
		printf("%.3f\n",A[i]);
	}
}		

