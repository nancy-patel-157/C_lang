#include <stdio.h>
int main()
{
    int hour;
    scanf("%d",&hour);
    if(hour>=0||hour<=12){
        printf("AM");
    }
    else if(hour>=12||hour<=23){
        printf("PM");
    }
    else{
        printf("invalid");
    }


}