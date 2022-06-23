/*Ejercicio 9 Escribir un programa para solicitar al usuario que ingrese números enteros 
positivos (la cantidad que ingresará no se conoce y la decide el usuario). La 
lectura de números finalizará cuando el usuario ingrese el número -1. Por cada 
número ingresado, mostrar la cantidad de dígitos pares y la cantidad de dígitos 
impares que tiene. Al finalizar, mostrar cuántos números múltiplos de 3 ingresó 
el usuario. */

 #include<stdio.h>

main(){
	int num[100],i,x,par,impar,mul,y;
	par=0;
	impar=0;

	mul=0;

	do{
		printf("inserte la cantidad de numeros\n");
		scanf("%i",&x);
		for(i=0;i<x;i++){
			printf("Inserte un numero entero \n  ");
			scanf("%i",&num[i]);
			if((num[i]%2)==0){
				par=par+1;
			}
			else{
				impar=impar+1;
			}
			if((num[i]%3)==0){
				mul=mul+1;
			}
		}
		printf("los numeros multiplos de 3 sobre los numeros ingresados es %i\n", mul);
		printf("El total de numeros pares es %i\n", par);
		printf("El total de numeros impares es %i\n", impar);
		printf("desea terminar? '-1' para finalizar\n");
		scanf("%i",&y);
	}

