#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int calificacion[10],i,suma=0;
    float promedio;
    
    for (i=0;i<10;i++)
	{
		printf("Calificacion %d: ",(i+1));
		scanf ("%d",&calificacion[i]);
		suma=suma+calificacion[i];
	}
	
	promedio=(float)suma/10;
	printf("El promedio general es: %.2f \n\n",promedio);
	
	system("pause");
	return 0;
}
