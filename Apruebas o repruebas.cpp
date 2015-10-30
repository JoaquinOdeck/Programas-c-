#include<stdio.h>
#include<stdlib.h>

int main()
{
	float numero;
	
	printf("Ingrese la calificacion: ");
	scanf("%f" ,&numero);
	
	
	if(numero >= 7){
		printf("Usted paso la materia \n");
	}
	else{
		printf("Usted no paso la materia \n");
	}
	
	
	system("pause");
	return 0;
}
