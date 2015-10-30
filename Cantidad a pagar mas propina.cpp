#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numero,propina,total;
	printf("Ingrese la cantidad a pagar: ");
	scanf("%i" ,&numero);
	
	if(numero >= 1000){
		propina = numero*.10;
		total = propina+numero;
		printf("La propina a pagar es: %i\n",propina);
		printf("El total a pagar es: %i\n",total);
		
	}
	else{
		propina = numero*.16;
		total = propina+numero;
		printf("La propina a pagar es: %i\n",propina);
		printf("El total a pagar es: %i\n",total);
	}
	
system("pause");
return 0;	
}
