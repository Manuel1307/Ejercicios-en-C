/*Ejercicio 8 Escribir un programa que pregunte al usuario si desea analizar calificaciones 
de alumnos y, s�lo si responde �S� comenzar� el procesamiento de los datos, 
hasta que el usuario ingrese algo diferente de �S�. Por cada alumno, permitir 
ingresar su calificaci�n. Si es mayor a 4 el alumno est� aprobado. Finalmente, 
mostrar �Porcentaje de alumnos aprobados: x %� (donde x es el porcentaje de 
aprobados sobre el total de calificaciones procesadas). Tambi�n se debe 
imprimir �Promedio de los aprobados: y� (donde y es la calificaci�n promedio, 
s�lo de los alumnos aprobados).*/

#include<stdio.h>

main(){
	float aprobados,cantidad,sa,cal;
	char letra;
	letra='s';
	aprobados=0;
	cantidad=0;
	sa=0;
	printf("Desea analizar las notas? \n");
	scanf("%c",&letra);
	
	if (letra='s'){
		do{
			printf("Ingrese las notas del alumno \n");
			scanf("%f",&cal);
			if(cal>4){
				aprobados=aprobados+1;
				sa=sa+cal;
			}
			cantidad=cantidad+1;
			printf("Continuar?\n");
			scanf("%c",&letra);
		}
		while(letra!='s');
		printf("Porcentaje de los aprobados %.2f\n", (aprobados*100)/cantidad);
		printf("Porcentaje de los aprobados %.2f\n",sa/aprobados);
	}
	
	
	
	return 0;
}



