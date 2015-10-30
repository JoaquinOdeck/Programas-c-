#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color b");
	int numero,suma=0;
	printf("ingrese numero ");
	scanf("%d",&numero);	
	for(int i=0;i<=numero;i++){
		suma=suma+i;		
	}
	printf("%d\n",suma);
	system("pause");
	return 0;
}
