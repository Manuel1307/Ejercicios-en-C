/*programa que le solicita un numero al usuario y muestra todos los numeros por los que es divicible*/

#include<stdio.h>

int main(){
	
	int iter= 1, number =0, result = 0;
	
	printf("\n inserte un numero: "); scanf("%i", &number);
	
	printf("\n los divisores del numero %d son: ",number);
	
		for(iter = 1; iter <= number; iter++) //bucle de las veces que se iterará "iter".
		{
		
			result = number % iter; 
			
			if(result == 0) //residuo de la división, si es 0 se almacena en la variable "result".
			
			{
			printf("\n %d",iter); // muestra los números divisibles.
			}
			
		}

			return 0;
	}


	


