#include<stdio.h>
#include<iostream>
#include<string.h>
#include<conio2.h>


main ()
{
  int v[30],e=0,r=1,t=0;

    printf("Que cantidad de numeros desea ingresar \n");
    scanf("%d",&e);

    printf("Introduzca los numeros\n");

      for(r=1;r<=e;r++)
      {
        scanf("%d",&v[r]);
       }

      clrscr();

      for(r=1;r<e;r++)
      {
        printf("%d\n",v[r]);
       }
       t=t+e;
      for(r=t;r>=1;r--)
      {
        printf("%d\n",v[r]);
       }
}
