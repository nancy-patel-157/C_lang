#include<stdio.h>
void main()
{
int num, i, z=0; //z is flag variable
printf("Enter no.");
scanf("%d", &num);
for(i=2; i <= num/2 ; i++)
{ if (num % i == 0)
 { z = 1; 
 break; }
 }
if(z == 1)
printf("NOT PRIME");
else{
printf("PRIME ");
}
}