#include<stdio.h>
#include<stdlib.h>
void main()
{
    int t=0;
    float piso;
    int depa[21][7];
    int i,j;
    for(i=1;i<=20;i++){
        for(j=1;j<=6;j++){
            printf("Ingrese habitantes del departamento %d del piso %d: ",j,i);
            scanf("%d",&depa[i][j]);
        }
    }
    for(i=1;i<=20;i++){
        for(j=1;j<=6;j++){
                t+=depa[i][j];
        }
    }
    for(i=1;i<=20;i++){
    piso=0;
        for(j=1;j<=6;j++){
            piso+=depa[i][j];
        }
        piso=piso/6;
        printf("Promedio de habitantes del piso %d: %.2f\n",i,piso);
    }

    printf("Total habitantes: %d",t);
}
