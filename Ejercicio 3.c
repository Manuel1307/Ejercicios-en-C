/*Ejercicio 3: Escribir un programa para solicitar al usuario tres números y mostrar en 
pantalla al menor de los tres.*/

#include<stdio.h>

int main(){
	
	int n1, n2, n3;
	
	printf("inserte 3 numeros: "); scanf("%d %d %d",&n1, &n2, &n3); 
	
		if(n1 < n2 && n1 < n3) //Condicional donde n1 es el menor de los 3 números.
		{
			printf("\n El numero %d es el menor de los tres ",n1);
		}
	
		if(n2 < n1 && n2 < n3) // Condicional donde n2 es el menor de los 3 números.
		{
			printf("\n El numero %d es el menor de los tres ",n2);
		}
	
		if(n3 < n1 && n3 < n2) //Condicional donde n3 es el menor de los tres números.
		{
			printf("\n El numero %d es el menor de los tres ",n3);
		}
	
	return 0;
}
