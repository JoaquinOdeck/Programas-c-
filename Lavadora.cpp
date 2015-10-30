#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("color b");
	
	int numero,num;
	printf("----------------------------------\n");
	printf("INGRESE LA CALIDAD DE SU PRENDA:\n");
	printf("1.- DELICADA.\n");
	printf("2.- NORMAL.\n");
	printf("3.- SUCIA.\n");
	printf("----------------------------------\n");
	scanf("%d",&numero);
    printf("----------------------------------\n");
    
	switch (numero){
	case 1: printf("PRENDAS DELICADAS.\n");
	printf("INGRESE TU CANTIDAD DE ROPA: ");
	scanf("%d" ,&num);
	printf("----------------------------------\n");
	if(num >= 0 && num <= 10){
		printf("TU DEBES OCUPAR EL NIVEL MINIMO DE AGUA\n\n");
	}
	if(num >= 11 && num <= 15){
		printf("TU DEBES OCUPAR EL NIVEL MEDIO DE AGUA\n\n");
	}
	if(num >= 16 && num <= 20){
		printf("TU DEBES OCUPAR EL NIVEL MAXIMO DE AGUA\n\n");
	}
	break;
	
	case 2: printf("PRENDAS NORMALES.\n");
	printf("INGRESE TU CANTIDAD DE ROPA: ");
	scanf("%d" ,&num);
	printf("----------------------------------\n");
	if(num >= 0 && num <= 10){
		printf("TU DEBES OCUPAR EL NIVEL MINIMO DE AGUA\n\n");
	}
	if(num >= 11 && num <= 15){
		printf("TU DEBES OCUPAR EL NIVEL MEDIO DE AGUA\n\n");
	}
	if(num >= 16 && num <= 20){
		printf("TU DEBES OCUPAR EL NIVEL MAXIMO DE AGUA\n\n");
	}
	break;
	
	
	case 3: printf("PRENDAS SUCIAS.\n");
	printf("INGRESE TU CANTIDAD DE ROPA: ");
	scanf("%d" ,&num);
	printf("----------------------------------\n");
	if(num >= 0 && num <= 10){
		printf("TU DEBES OCUPAR EL NIVEL MINIMO DE AGUA\n\n");
	}
	if(num >= 11 && num <= 15){
		printf("TU DEBES OCUPAR EL NIVEL MEDIO DE AGUA\n\n");
	}
	if(num >= 16 && num <= 20){
		printf("TU DEBES OCUPAR EL NIVEL MAXIMO DE AGUA\n\n");
	}
	break;
	
	default: printf("ERROR.\n\n");
	}
	
	system("pause");
	return 0;
}
