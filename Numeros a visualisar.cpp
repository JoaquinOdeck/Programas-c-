#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int x;
    int i=1;
    int aux=0;
	printf("ingrese la cantidad de numeros que quiera visualisar ");
	scanf("%d",&x);
	
    for(int i=1; i<=x; i++){	
		printf("%i ",x);
    }
		
	printf("\n");
	
	system("pause");
	return 0;
}
