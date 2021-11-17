#include <stdio.h>
#include<stdlib.h>
void recaudacion(int co[4][13],int rt,int rl);
int main(){
  int i,j;
  int rt=0;
  int rl=0;
  int co[4][13];
  for(i=1;i<=3;i++){
    for (j=1;j<=12;j++)
    {
      printf("Indique recaudacion Linea %d, colectivo %d:",i,j);
      scanf("%d",&co[i][j]);
    }
  }
  recaudacion(co,rt,rl);

}
void recaudacion(int co[4][13],int rt,int rl){
int i,j;
for(i=1;i<=3;i++){
    rl = 0;
    for (j=1;j<=12;j++){
      printf("Recaudacion de la linea %d y colectivo %d es: %d \n",j, i, co[i][j]);
      rt=rt+co[i][j];
      rl=rl+co[i][j];
    }
    printf("Recaudacion de la linea %d:%d\n",i,rl);
  }
  printf("Recaudacion total: %d\n",rt);
}

