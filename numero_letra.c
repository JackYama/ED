#include <stdio.h>
#include <stdlib.h>
int main{
char caracter;
printf("Introduzca el caracter que quiera pra saber si es un numero o una letra\n");
scanf("%c",caracter);

if(caracter >= 'A' | caracter <= 'Z' | caracter <= 'a' | caracter <= '<'){
		printf("El caracter %d es una letra\n, caracter");
		
		}if else (  caracter >=0 | caracter <=100){
			printf("El caracter %d es un número\n");

		}else printf("No es ni una letra ni un número");

return 0;
}
