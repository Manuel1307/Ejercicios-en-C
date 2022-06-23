/*este programa muestra la sumatoria de todos los números entre el 0 
y el 100*/

#include<stdio.h>

int main(){

int i, suma = 0;

    for(i=0; i <= 100; i++){ //bucle de iteración donde i vale 0 e iguala a 100.
    
    	printf("\n%i",i);
    	
		suma = suma + i; //suma de los numeros del 0 al 100.
    }

printf("\nla sumatoria de todos los numeros comprendidos entre 0 y 100 es: %i",suma);

 return 0;
}
