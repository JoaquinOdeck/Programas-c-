#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("color b");
	
	int numero,num;
	printf("----------------------------------\n");
	printf("INGRESE EL NUMERO DEL MES:\n");
	printf("1.-  ENERO.\n");
	printf("2.-  FEBRERO.\n");
	printf("3.-  MARZO.\n");
	printf("4.-  ABRIL.\n");
	printf("5.-  MAYO.\n");
	printf("6.-  JUNIO.\n");
	printf("7.-  JULIO.\n");
	printf("8.-  AGOSTO.\n");
	printf("9.-  SEPTIEMBRE.\n");
	printf("10.- OCTUBRE.\n");
	printf("11.- NOVIEMBRE.\n");
	printf("12.- DICIEMBRE.\n");
	printf("----------------------------------\n");
	scanf("%d",&numero);
    printf("----------------------------------\n");
    
    switch (numero){
    case 1: printf("MES DE ENERO.\n");
    break;
    case 2: printf("MES DE FEBRERO.\n");
    break;
    case 3: printf("MES DE MARZO.\n");
    break;
    case 4: printf("MES DE ABRIL.\n");
    break;
    case 5: printf("MES DE MAYO.\n");
    break;
    case 6: printf("MES DE JUNIO.\n");
    break;
    case 7: printf("MES DE JULIO.\n");
    break;
    case 8: printf("MES DE AGOSTO.\n");
    break;
    case 9: printf("MES DE SEPTIEMBRE.\n");
    break;
    case 10: printf("MES DE OCTUBRE.\n");
    break;
    case 11: printf("MES DE NOVIEMBRE.\n");
    break;
    case 12: printf("MES DE DICIEMBRE.\n");
    break;
    
    default: printf("NO EXISTE ESE MES.\n\n");
	}
	
	system("pause");
	return 0;
}
