/*Ejercicio 5 Muestre los primeros 10 digitos de la serie Fibonacci*/

#include<stdio.h>

int main (){
	
	printf("\n los primeros 10 digitos de la serie Fibonacci son: ");
	int i =1,  x=0, y=1, z=1;
	
	for(i = 1; i <= 10; i++)
	{
		z= x + y;
		printf("\n %i",z);
		x = y;
		y = z;
	}
	
	return 0;
} 


