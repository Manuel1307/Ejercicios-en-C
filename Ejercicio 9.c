/*Ejercicio 9 Escribir un programa para solicitar al usuario que ingrese n�meros enteros 
positivos (la cantidad que ingresar� no se conoce y la decide el usuario). La 
lectura de n�meros finalizar� cuando el usuario ingrese el n�mero -1. Por cada 
n�mero ingresado, mostrar la cantidad de d�gitos pares y la cantidad de d�gitos 
impares que tiene. Al finalizar, mostrar cu�ntos n�meros m�ltiplos de 3 ingres� 
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

