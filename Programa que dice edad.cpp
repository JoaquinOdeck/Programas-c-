#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int edad;
	
	system("color b");
	
	printf("Ingrese tu edad: ");
	scanf("%d" ,&edad);
	printf("\n");
	
	if(edad >= 0 && edad <= 2){
		printf("Tu eres un bebe \n");
	}
	if(edad >= 3 && edad <= 12){
		printf("Tu eres un niño \n");
	}
    if(edad >= 13 && edad <= 18){
		printf("Tu eres un adolecente \n");
	}
	if(edad >= 19 && edad <= 29){
		printf("Tu eres un jovenes \n");
	}
	if(edad >= 30 && edad <= 59){
		printf("Tu eres un adultos \n");
	}
		
	system("pause");
	return 0;
}
