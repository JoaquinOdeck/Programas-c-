#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numeros[100];
	int CantidadNumeros = 0;
	int mayor=0;
	
	
	printf("¿Cuantos numeros desea introducir? ");
	scanf("%i",&CantidadNumeros);
	
	for(int i=0; i < CantidadNumeros; i++)
	{
		printf("\nIngrese el primer numero en la posicion %i: ",i+1);
		scanf("%i",&numeros[i]);		
	}

	for(int i=0; i < CantidadNumeros; i++)
	{
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	printf("\nEl numero mayor introducido es: %i \n\n",mayor);
	
	system("pause");
	return 0;
}
