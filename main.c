#include <stdio.h>

void main ()
{
  int num, rem, sum=0;
  scanf ("%d", &num);
  int n=num;
  
  if (num>0)
  {
    while (n>0)
    {
      rem=n%10;
      sum=sum*10+rem;
      n=n/10;
    }

    if (sum==num && num<=1000)
      printf("yes");
  }  
  
  else
    printf ("no");
    
}    
   
  
  
