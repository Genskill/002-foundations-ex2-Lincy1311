#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
void main()
{  int i,j,k;
   int p = get_int("Enter type of pattern (1 or 2) ");
   if(p==1)
   {
      int n = get_int("Enter number of rows ");
      for(i=n;i>0;i--)
      {  for(j=0;j<i;j++)
         {  
          printf("#");
         }
      printf("\n");
      } 
   }  
    else
    { 
       int y = get_int("Enter number of rows ");
       int x=1;
       for(i=y;i>0;i--)
       { 
          for(j=0;j<i-1;j++)
           {  
              printf(" ");
           }
       for(k=0;k<x;k++)
       {  
           printf("#");
       }
       printf("\n");
       x++;
       }
    }   
} 
 
 
