/*Creado el 15 de agosto de 2018 por Paloma Medina*/

#include<stdio.h>

int main()
{
     int edad,edad2;
     char nombre[20];
         
     printf("Hola Dime tu nombre \n");
     scanf("%s",&nombre);
     printf("Dime tu edad\n");
     scanf("%i",&edad);
     edad2=edad+10;
     printf("%s edad en 2018 es: %i \n",nombre,edad2);
     return 0;
}
