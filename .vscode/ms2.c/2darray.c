#include<stdio.h>
int main(){
    int r1,c1, r2, c2;
    int A[r1][c1];

    printf("enter mattrix row and column\n");
    scanf("%d%d",&r1,&c1);

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
    }
    }
    int b[r2][c2];
    
    printf("enter mattrix row and column\n");
    scanf("%d%d",&r2,&c2);

        for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
    }
}
 int result[r1][c1];
if(r1==r2&&c1==c2){
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
     result[i][j]=A[i][j]+b[i][j];
    }
}
}else{
    printf("matrix addition is not possible");
}

for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        printf("%d",result[i][j]);
    }printf("\n");
}
return 0;
}