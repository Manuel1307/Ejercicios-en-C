/*Ejercicio 7 Escribir un programa que permita saber si un año es bisiesto.*/

#include <stdio.h>

main (){
	int a,b,c;
	
	printf("Ingrese un ano \n");
	scanf("%i",&a);
	
b=a/4;
c=a/400;
	if(b=0){
		if(a/100!=0){
				printf("El ano no es bisiesto \n");
			}
		else{
				if(c=0){
					printf("El ano no es bisiesto \n");	
					}
				else{
					printf("El ano es bisiesto \n");
				}
			}
	}
	else {
		printf("El ano es bisiesto \n");	
	
	}
	
	
	
return 0;
}
