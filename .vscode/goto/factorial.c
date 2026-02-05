#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enter the no of terms=");
    scanf("%d",&n);
    x:fact=fact*i;
    i++;
    if(i<=n)
    goto x;
    printf("factorial=%d",fact);
}