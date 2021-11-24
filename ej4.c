#include<stdio.h>
#include<stdlib.h>
void recaudacion(int co[4][13],int rt,int rl);
void main(){
    int co[4][13]={0};
    int i,j,aux;;
    int rt=0,rl=0;
    do{
        printf("Ingrese el numero de coche:");
        scanf("%d",&j);
        if(j>=1){
        printf("Ingrese la linea:");
        scanf("%d",&i);
        printf("Ingrese la recaudacion:");
        scanf("%d",&aux);
        co[i][j]=aux+co[i][j];
        }
        else{
            break;
        }
    }while(j>=1);
    recaudacion(co,rt,rl);
 }

 void recaudacion(int co[4][13],int rt,int rl){
int i,j;
for(i=1;i<=3;i++){
    rl = 0;
    for (j=1;j<=12;j++){
      printf("Recaudacion de la linea %d y colectivo %d es: %d \n",i, j, co[i][j]);
      rt=rt+co[i][j];
      rl=rl+co[i][j];
    }
    printf("Recaudacion de la linea %d:%d\n",i,rl);
  }
  printf("Recaudacion total: %d\n",rt);
 }
