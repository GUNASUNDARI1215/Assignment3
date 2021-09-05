//C program to sort the elements in ascending order

#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10];
	int n,i,j,k;
	
	printf("Input the size of array : ");
	scanf("%d",&n);
	
  	for(i=0;i<n;i++)
	{
		printf("Element-%d : " ,i);
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				k=a[i];
		        a[i]=a[j];
		        a[j]=k;
			}
		}
	}
	
	printf(" \nElements of array in sorted ascending order : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
