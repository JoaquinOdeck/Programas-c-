#include<stdio.h>
#include<stdlib.h>

int main ()
{
	system("color b");
	int metros,avanza,retrocede,suma=0,dia=0,noche=0;
	
	printf("Ingrese la cantidad de metros de profundidad: ");
	scanf("%i",&metros);
	printf("Ingrese la cantidad de metros que avanza el cangrejo: ");
	scanf("%i",&avanza);
	printf("Ingrese la cantidad de metros que retrocede el cangrejo: ");
	scanf("%i",&retrocede);
	printf("\n");
	
    if(metros <= avanza)
	{
	printf("EL CANGREJO SOLO TARDA UN DIA EN SALIR.\n\n");
    }	
	else if(retrocede < avanza)
	    {
		    while( suma < metros)
	        { 
			    if(suma < metros)
			    {
			    suma += avanza;
			    dia++;
		        }
		    
		        if(suma < metros)
			    {
			    suma-=retrocede;
			    noche++;
		        }
	        }
	        printf("El cangrejo tarda %d dia(s) en salir.\n",dia);
			printf("El cangrejo estubo %d noche(s) en el pozo.\n\n",noche);		
	    }
	    else
	    {
	    printf("EL CANGREJO NO PODRA SALIR...\n");
	    }
		    
	system("pause");
	return 0;
}
