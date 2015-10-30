#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,suma,resta,multiplicacion;
	float div;
	
	printf("ingrese un numero: ");
	scanf("%i",&x);
	printf("ingrese el segundo numero: ");
	scanf("%i",&y);
	
	suma=x+y;
	resta=x-y;
	multiplicacion=x*y;
	div=(float)x/y;//poner un parentesis con nombre de la variable es hacer un cast
	
	printf("El valor de x+y es: %i\n",suma);
	printf("El valor de x-y es: %i\n",resta);
	printf("El valor de x*y es: %i\n",multiplicacion);
	printf("El valor de x/y es: %.2f\n",div);
	
	system("pause");
	return 0;
}
