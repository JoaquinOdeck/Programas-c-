#include<stdio.h>
#include<stdlib.h>

int main()
{
int i=1,numero,j;
	
printf("  PROGRAMA  QUE IMPRIME  VECES DE NUMEROS \n   ");	
	
	printf("   INGRESE  UN NUMERO: ");
	scanf("%d",&numero);
			
	while(i<=numero){
	j=1;       
	while(j<=i){
	printf("\n %d",i," +  ");
    j++;
    }
	i=i+1;	
	}
	system("pause");
	return 0;
}
