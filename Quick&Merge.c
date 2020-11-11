#include<stdio.h>
#include<stdlib.h>

void Merge(float a[], int m, int mid, int n)
	{
		float b[20];
		int i, j, k, l;
		k=m;
		i=m;
		j=mid+1;
		l=n;
		int z;
		while(i<=mid && (j<=n))
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
		for(z=0; z<=n; z++)
		{
			a[z]=b[z];
		}
	}

void MergeSort(float b[], int m, int n)
	{
		int mid;
		if(m<n)
		{
			mid=(m+n)/2;
			MergeSort(b, m, mid);
			MergeSort(b, mid+1, n);
			Merge(b, m, mid, n);
		}
	}



void QuickSort(float a[], float l, float n)
	{
		int pivot,i,j,temp;
		if(n>l)
		{
		pivot=l;
		i=l;
		j=n;

		while(i<j)
		{
			while(a[i]<=a[pivot] && i<n)
			{
				i=i+1;
			}
			while(a[j]>a[pivot])
			{
				j=j-1;
			}
			if(i<j)
			{
			    temp=a[i];
			    a[i]=a[j];
			    a[j]=temp;
			}
		} 
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		QuickSort(a, l, j-1);
		QuickSort(a, j+1, n);
	}
	}


void DISPLAY(float a[], int n)
	{
		int i;
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("%.2f   ",a[i]);

		}

	}

void INPUT(float a[],int n)
{
    int i;
    printf("Enter Elements in the Array\n:>");
    for(i=0;i<n;i++)
    {
       scanf("%f",&a[i]);
    }
}

void main()
	{
		int num,size,size2,i;
		float a[50];
		while(1)
		{
            printf("\n 1:Input\n 2: Display\n 3:Quick Sort\n 4:Merge Sort\n 5:EXIT\n:>");
			scanf("%d",&num);
           switch(num)
			{
            case 1:
            printf("\nEnter the Size of Array\n:>");
            scanf("%d",&size);
            INPUT(a,size);
			break;

            case 2:
	  		DISPLAY(a, size);
            break;

			case 3:
	  		QuickSort(a,0,size-1);

	  		break;
	  		case 4:
            MergeSort(a,0,size-1 );
           

			break;
			case 5:
				exit(0);
			}
		}
	}
