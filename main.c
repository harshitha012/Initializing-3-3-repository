/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3],i,j,sum=0;
    printf("input elements in a matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("elements-[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n the matrix is:\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<j;i++)
    {
        sum=sum+a[i][j];
    }
    printf("sum of the diagonal elements in a matrix is:%d",sum);
}
    
    
    
    
    
    
    
    
    
        
        
        
        
        
        
        
        
        
        
    