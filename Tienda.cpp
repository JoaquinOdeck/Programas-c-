#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int numero,num,galletas,refrescos,papas,chocolates,helados,total;
	int opc;
	int i=0;
	
    system("color b");	

	printf("----------------------------------\n");
	printf("1.- VENTA DE PRODUCTOS:\n");
	printf("2.- GANANCIAS.\n");
	printf("3.- SALIR.\n");
	printf("----------------------------------\n");
	scanf("%d",&opc);
    printf("----------------------------------\n");
    	
    switch(opc){
	
    case 1: printf("VENTA DE PRODUCTOS.\n");
    
    printf("----------------------------------\n");
	printf("1.- GALLETAS...$7\n");
	printf("2.- REFRESCO...$10\n");
	printf("3.- PAPAS......$9\n"); 
	printf("4.- CHOCOLATE..$12\n");
	printf("5.- HELADO.....$15\n");
	printf("----------------------------------\n");
    
	printf("ingresa la cantidad de galletas: ");
    scanf("%d" ,&galletas);
    
	printf("ingresa la cantidad de refrescos: ");
    scanf("%d" ,&refrescos);
    
	printf("ingresa la cantidad de papas: ");
    scanf("%d" ,&papas);
    
	printf("ingresa la cantidad de chocolates: ");
    scanf("%d" ,&chocolates);
    
	printf("ingresa la cantidad de helados: ");
    scanf("%d" ,&helados);  
    printf("\n");
	printf("----------------------------------\n");	
	
    break;
    
	
    case 2: printf("GANANCIAS.\n");
    
    total = (galletas*7)+(refrescos*10)+(papas*9)+(chocolates*12)+(helados*15);
	printf("TU TOTAL A PAGAR ES: %d\n\n",total);
    break;
    
    default: printf("REGRESE PRONTO.\n\n");
	}
   
    
	system("pause");
	return 0;
}
