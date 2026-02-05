#include<stdio.h>
void main()
{
  int num, rem, revnum, n;
  printf ("Enter an integer value: \n");
  scanf ("%d", &num);
  wlile(num!=0)
  {
    rem =num%10;
    revnum =revnum*10+ rem;
    num =num/10;

  }
  printf("%d",revnum);

  
  }