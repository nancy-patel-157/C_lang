#include<stdio.h>
 long int fact(int x){
    int fact =1, i;
    if(x==0)return 0;
    else{
        for(i=1;i<x;i++){
        fact = fact*i;
        }return fact;
        
    }
 }
 

int main(){
    int  a;
    scanf("%d",&a);
    printf("%d",fact(a));

}