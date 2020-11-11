#include<stdio.h>

void swap(float* a, float* b)
{
	float t;
	t=*a;
    *a=*b;
	*b=t;
}
/*
int part(int a[],int l,int h)
{
 int pivot=a[l];
 int i=l;
 int j=h;
while(i<=j) 
{
 while(a[i]>=pivot)
 {
 	i++;
 }
 while(a[j]<pivot)
 {
 	j--;
 }
 swap(&a[i],&a[j]);
}
swap(&a[j],&a[l]);

return j;
}
*/

int part(float a[],int l,int h)
{
	int x=a[h];
	int i=(l-1);
	int j;
	for(j=l; j<=h-1; j++)
	{
		if(a[j]<=x)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1], &a[h]);
    
    return (i+1);
}

QuickSort(float a[],int l,int h)
{
	int stack[h-1];
	int top=-1;
	int p;
	stack[++top]=l;
	stack[++top]=h;
	
	while(top>=0)
	{
		h=stack[top--];
		l=stack[top--];
	     p=part(a, l, h);
		
		if(p-1>l)
		{
			stack[++top]=l;
			stack[++top]=p-1;
		}
		if(p+1<h)
		{
			stack[++top]=p+1;
			stack[++top]=h;
		}
	}
}
void display(float a[], int size)
{   
	int i;
    printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%.2f\t",a[i]);
	}
}
void main()
{
int size, i;
printf("\nEnter the size of Array\n:>");
scanf("%d",&size);
float a[size];
printf("\nEnter the Elements:");
for(i=0;i<size;i++)
{
	printf("\n:>");
	scanf("%f",&a[i]);
}

display(a,size);
QuickSort(a,0,size-1);
display(a,size);

}

