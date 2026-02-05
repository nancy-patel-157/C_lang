#include <stdio.h>
#include<math.h>
int main(){
    int x,y;
    char n;
    //printf("enter your no for calculation=");
    //scanf("%d%d",&x,&y);
    
     printf("enter your opration for calculation=");
    scanf("%d%d",&x,&y);
    scanf("%c",n);
switch(n)
{
    case '+':
    printf("sum=%d",x+y);break;
    case '-':
    printf("diff=%d",x-y);break;
    case '*':
    printf("product=%d",x*y);break;
     case '/':
    printf("div=%d",x/y);break;
     case '%':
    printf("modulus=%d",x%y);break;
    
    return 0;

}

}