#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int x,num;
	int i=1;
	int suma=0;
	float promedio;
	printf("ingrese la cantidad de numeros que quiera ingresar ");
	scanf("%d",&x);
	
	while(i <= x){
		printf("dame un numero ");
		scanf("%d",&num);
		suma=suma+num;
		promedio=(float)suma/x;
		i++;
	}	
	printf("Tu promedio es: %.2f\n",promedio);
	
	system("pause");
	return 0;
}
