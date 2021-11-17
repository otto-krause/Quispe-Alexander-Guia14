#include<stdio.h>
#include<stdlib.h>
void leer(int m[2][3]);
int main(){
int m[2][3];

leer(m);

}
void leer(int m[2][3])
{
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Ingrese la matriz f%d c%d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("M[%d][%d]=%d, ",i,j,m[i][j]);
        }
}
}
