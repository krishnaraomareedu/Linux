#include"Utils.h"
int factorial(int x)
{
  if (x == 0) 
    return 1;
  else
    return (x*factorial(x-1));
}

int is_Prime(int b)
{
   int c;
 
   for ( c = 2 ; c <= b - 1 ; c++ )
   { 
      if ( b%c == 0 )
     return 0;
   }
   return 1;
}
int is_palindrome(int n)
{
    int r,sum=0,temp;
    temp=n;
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
       return 1; 
    else     
       return 0;  

}