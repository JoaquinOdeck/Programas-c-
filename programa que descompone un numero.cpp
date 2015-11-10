#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int numero,res;
	printf("programa que descompone un numero\n");
	printf("Dame tu numero: ");
	scanf("%d",&numero);
	do{
		res=numero%10;
		numero=numero/10;
		printf("El digito es %d\n",res);
	}while(numero != 0);
	
	system("pause");
	return 0;	
}
