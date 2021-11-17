#include<stdio.h>
#include<stdlib.h>
void main(){
 int c=0;
 int alum[101][4];
 int i,j;
 for(i=1;i<101;i++){
        for(j=1;j<4;j++){
            printf("Ingrese nota del %d trimestre del alumno %d: ",j,i);
            scanf("%d",&alum[i][j]);
        }
 }
 do{
    printf("Quiere cambiar alguna nota?");
    printf("SI=1 | NO=0  ");
    scanf("%d",&c);
    if(c!=0){
        printf("Ingrese el alumno:");
        scanf("%d",&i);
        printf("Ingrese el trimestre:");
        scanf("%d",&j);
        printf("Ingrese la nota:");
        scanf("%d",&alum[i][j]);
    }
 }while(c!=0);
}
