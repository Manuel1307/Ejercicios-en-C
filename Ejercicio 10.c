/* programa que permita al usuario ingresar 6 números enteros, que 
pueden ser positivos o negativos. que al finalizar, muestra la sumatoria de los 
números negativos y el promedio de los positivos.*/

#include<stdio.h>

main (){
	
	int x,sp,sn,prom,i,prom1;
	sp=0;
	sn=0;
	prom=0;
 	for (i=0;i<6;i++){
 		printf("Ingrese un numero\n");
 		scanf("%i",&x);
 		if (x>0){
		 sp=sp+1;
		 prom=prom+x;
		 }
 		else{
 			sn=sn+x;
		 }
		 
	 }
	prom1=prom/sp;
	printf("La suma de los numeros negativos es %i\n", sn);
	printf("El promedio de los numero positivos es %i\n", prom1 );
	return 0;
}
