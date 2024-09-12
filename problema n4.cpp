#include<stdio.h>
#include<string.h>
#include<iostream>

main()
{
int e=0,r=0,m6=0,m8=0;
float v[80],nma,nmb,prom;


    printf("Que cantidad de calificaciones desea ingresar \n");
    scanf("%d",&e);

    printf("Introduzca las calificaciones\n");


      for(r=0;r<e;r++)
      {
        scanf("%f",&v[r]);

        if(v[r]>=8.5){m8++;}

        if(v[r]<=6){m6++;}


       }

        nma = v[0];
        nmb = v[0];

       for(r=0;r<e;r++){
    if (v[r]> nma){
    nma=v[r];
    }
    if (v[r]< nmb){
    nmb=v[r];
    }

  }
       prom = (nma+nmb)/2;

       printf("Notas menores a 6: %d\n", m6);
       printf("Notas mayores a 8.5: %d\n", m8);
       printf("La nota mas alta es: %.1f\n", nma);
       printf("La nota mas baja es: %.1f\n", nmb);
       printf("El promedio de notas es de: %.21\n", prom);
}
