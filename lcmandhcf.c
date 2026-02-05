 
#include <stdio.h>
int main()
{ int num1, num2, i=1, GCD,n; 
 printf("Enter two integers: ");
 scanf("%d%d", &num1, &num2);
 n = ((num1 < num2) ? num1 :num2);//find smaller number
 while( i<=n)
 {
if(num1%i==0 && num2%i==0) //test i is a factor of both numbers 
 { GCD=i; }
 i++;
 } 
printf("GCD of %d and %d is %d", num1, num2, GCD);
 return 0;
}