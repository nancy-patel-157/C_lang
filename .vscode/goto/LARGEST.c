#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your 3 no=");
   scanf("%d%d%d",&a,&b,&c);
   
   
    switch(a>b)
    {
        case 1: switch(a>c)
        {
            case 1: printf("%d",a);break;
             case 0: printf("%d",c);break;
        } break;
        case 0: switch(b>c)
        {
            case 1: printf("%d",b);break;
             case 0: printf("%d",c);break;
        } break;
        
}   }