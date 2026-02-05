#include<stdio.h>
int main(){
    int r1,c1;
    int A[r1][c1],  b[r1][c1], r[r1][c1];

    printf("enter mattrix row and column\n");
    scanf("%d%d",&r1,&c1);

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
    }
    }
        for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
     r[i][j]=A[i][j]+b[i][j];
    }
}
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("%d",r[i][j]);
    }printf("\n");
}
return 0;
}