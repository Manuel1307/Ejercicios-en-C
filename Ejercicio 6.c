/*Ejercicio 6 Escribir un programa que solicite al usuario el ingreso de tres números 
diferentes y muestre en pantalla al mayor de los tres.*/

#include <stdio.h>

main (){
	
	
	int p,q,r;
	
	printf("Ingrese un numero \n");
	scanf("%i",&p);
	
	printf("Ingrese otro numero \n");
	scanf("%i",&q);
	
	printf("Ingrese un numero mas \n");
	scanf("%i",&r);
		
if (p>q){
	if (p>r){
		printf("El mayor es: %i \n",p);
		}
		else{
		printf("El mayor es: %i \n",q);
		}
}
	else{
	if (q>r){
		printf("El mayor es: %i \n",q);
		}
		else{
		printf("El mayor es: %i \n",r);
		}
}
return 0;
}


