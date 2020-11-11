//Selection Sort

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int size, i, ch, k, pos, min, f , j, t, max,z;
	printf("Enter the size of array:");
	scanf("%d",&size);
	float a[size];
	printf("Enter element in Array:");
	for(i=0;i<size;i++)
	{
		scanf("%f",&a[i]);
	}
	
while(1)
{

	
	printf("Enter  1: for Acc. \n       2: for dec \n       3: exit \n:");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			for(i=0;i<size-1;i++){
			min=a[i];
 	         f=1;
 	 for(j=i+1;j<size;j++)
 	 {
 	 	if(a[j]<min)
 	 	{
 	 		min=a[j];
 	 		f=j;
 	 		
	}
	  
   }
   t=a[i];
   a[i]=a[f];
   a[f]=t;

}
for(i=0;i<size;i++)
	{
		printf("%.2f\n",a[i]);
	}
		break;
			
		case 2:
			for(i=0;i<size-1;i++){
			
 
 	max=a[i];
 	f=1;
 	 for(j=i+1;j<size;j++)
 	 {
 	 	if(a[j]>max)
 	 	{
 	 		min=a[j];
 	 		f=j;
 	 		
		  }
}
 
   z=a[i];
   a[i]=a[f];
   a[f]=z;


}
for(i=0;i<size;i++)
	{
		printf("%.2f\n",a[i]);
	}
	break;
			
		case 3:	
		exit(0);
	}
}
}






