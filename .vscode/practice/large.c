#include<stdio.h>
 int larg(int x, int y, int z){
    if(x>y && x>z)return x;
 
    if(y>x && y>z)return y;
 
     else return z;
 }

int main(){
    int  a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",larg(a,b,c));

}