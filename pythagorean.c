#include<stdio.h>
#include<cs50.h>
int main()
{  int hyp,large,sym;
   int a = get_int("side 1 ");
   int b = get_int("side 2 ");
   int c = get_int("side 3 ");
   large=a;
   if(b>large)
   {
        large=b;
   }
   if(c>large)
   {
       large=c;
   }
   hyp=large*large;
   sym=(a*a)+(b*b)+(c*c)-hyp;
   if(hyp==sym)
   {
       printf("Yes");
   }
   else
   {
       printf("No");
   }
   return 0;
}   
