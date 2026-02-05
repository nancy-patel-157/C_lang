#include<stdio.h>
int gcd(int x, int y){
    if (y == 0)return x;
    return gcd(y,x%y);
}
int main(){
    int a,b;
    printf("Enter the  numbers: ");
    scanf("%d%d",&a,&b);
    printf("GCD= %d\n",gcd(a,b));
}