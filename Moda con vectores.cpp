#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int cal[10],i,posmayor,mayor,bandera,posibles[11];
	
	for(i=0;i<10;i++){
		printf("Dame una calificacion ");
		scanf("%i",&cal[i]);
	} 
	for(i=0;i<11;i++)
	{
		posibles[i] = 0;
	}
	for(i=0;i<10;i++){
		posibles[cal[i]]++;
	}
	posmayor=0;
	mayor=posibles[0];
	
	for(i=0;i<11;i++)
	{
		if(posibles[i] == mayor)
		{
			bandera = 1;
		}
		if(posibles[i]>mayor){
			mayor = posibles[i];
			posmayor= i;
			bandera = 0;
		}
		if(bandera == 0){
			printf("\nla moda es: %d\n",posmayor);
		}
		
	}
	system("pause");
	return 0;
}
