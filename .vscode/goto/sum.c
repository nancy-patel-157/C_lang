#include<stdio.h>
int main(){
    int i=0,n,sum=1;
    printf("enter the no of terms=");
    scanf("%d",&n);
    x:sum=sum+i;
    i++;
    if(i<=n)
    goto x;
    printf("sum=%d",sum);
}