#include<stdio.h>
#include<iostream>

main()
{
    int v[30],e,r,esm,te=0;
    float prom=0;
    esm=0;

    printf("que cantidad de estudiantes desea ingresar \n");
    scanf("%d",&e);

    printf("introduzca las edades de los estudiantes\n");

    for(r=0;r<e;r++)
      {
        scanf("%d",&v[r]);
       }

    for(r=0;r<e;r++)
      {
        te=v[r]+te;
       }

    for(r=0;r<e;r++)
       {
        if(v[r]>prom)
            {esm=esm+1;}
        }

    prom=(te/e);



    printf("%d\n",e);
    printf("%d\n",r);
    printf("%d\n",te);
    printf("el promedio de edad de los estudiantes es: %.2f\n",prom);
    printf("la cantidad de estudiantes con edad superior a la media es: %d",esm);





}
