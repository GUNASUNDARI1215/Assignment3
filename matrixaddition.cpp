// C program to find the addition of 2 matrices

#include<stdio.h>
#include<conio.h>


int main()
{
  int a[10][10],b[10][10],add[10][10],i,j,n;
         
  printf("Input the size of the matrix : ");
  scanf("%d", &n); 
  
    
  printf("Input elements of Matrix1 :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element-[%d][%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }   
  
       printf("Input elements of Matrix2 :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element-[%d][%d] : ",i,j);
	           scanf("%d",&b[i][j]);
            }
        } 
		
		
//printing the matrices   
  printf("\nMatrix1 :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      
           printf("%d ",a[i][j]);
    }
  
  printf("\nMatrix2 :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      printf("%d ",b[i][j]);
    }


//addition of matrices 
  
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            add[i][j]=a[i][j]+b[i][j];
            
   printf("\nThe Addition of two matrix is : \n");
   for(i=0;i<n;i++){
       printf("\n");
       for(j=0;j<n;j++)
            printf("%d ",add[i][j]);
   }
   printf("\n");
   return 0;
}


