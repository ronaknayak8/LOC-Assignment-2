#include <stdio.h>
#include<conio.h>


void main()
{
    int a[3][3], b[3][3] , c[3] [3],i, j;
    clrscr();
    printf("Enter first Matrix:-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
            
        }
    }
    
     printf("Enter second Matrix:-\n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
            
        }
    }
    
    
     printf("Addition of the Matrices:-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           
            c[i][j] = a[i][j] +b[i][j] ;
            
            printf("%d  ",c[i][j]);
            
        }        
        
        
        printf("\n");
    }
    
    
    
    
    getch();
}