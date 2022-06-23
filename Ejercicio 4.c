/*Ejercicio 4: .Escribir un programa que, dado un número entero positivo, calcule y muestre 
su factorial.*/

#include<stdio.h>

int main(){
	
int number, f = 1;

printf("ingrese un numero: "); scanf("%i",&number); 

	for(int i=1; i <= number; i++) //bucle cantidad de veces que se multiplicará el numero.
	{
		f *= i;
	}
		
		printf("\n el factorial de %d es: %i",number,f);
		
	return 0;
}
