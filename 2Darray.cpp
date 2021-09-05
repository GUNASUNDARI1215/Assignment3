// C program to print 2D array

#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3],i,j;
	
	printf("Input elements in the matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element-[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe matrix is : \n");
	
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	
	printf("\n");
	return 0;
}
