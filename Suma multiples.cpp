#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a,b,suma,i;
		
	printf("ingrese el primer numero ");
	scanf("%i",&a);
	printf("ingrese el primer numero ");
	scanf("%i",&b);
	printf("\n");
	suma=0;
    i=0;
    
	while(i < b){
    
    suma=suma+a;
    i++;
    }
    printf("El resultado de la multiplicacion es %i \n",suma);
	
	system("pause");
	return 0;
}
