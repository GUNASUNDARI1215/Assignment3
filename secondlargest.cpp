//C program to find the second largest element in the array

#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10];
	int n,i,j=0,l1=0,l2=0;
	
	printf("Input the size of array : ");
	scanf("%d",&n);
	
	printf("Input %d elements in the array : \n",n);
	for(i=0;i<n;i++)
	{
		printf("Element-%d : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(l1<a[i])
		{
			l1=a[i];
			j=i;	
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(i==j)
		{
			i++;
			i--;
		}
		else
		{
			if(l2<a[i])
			{
				l2=a[i];
			}
		}
	}
	
	printf("The second largest element in the array : %d \n ",l2);
	return 0;
}


