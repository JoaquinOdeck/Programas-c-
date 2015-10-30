#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int numero,i=1,suma=0;
	
	printf("Ingrese numero ");
	scanf("%d" ,&numero);
	
	while(i <= numero)
	{
	suma=suma+i;
	i=i+1;	
	}
	printf("Tu suma total es: %d\n",suma);
	
	system("pause");
	return 0;
}

