#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("color b");
	float bit,bytes,kilo,megas,gb,tb;
	
	printf("Ingrese la cantidad de Megasbytes: ");
	scanf("%f" ,&megas);
	printf("\n");
	
	kilo=megas*1024;
	bytes=kilo*1024;     
	bit=bytes*8;
	gb=megas/1024;
	tb=gb/1024;
	
	printf("Tu cantidad de Megabytes es:      %.0f\n",megas);
	printf("\n");
	printf("Tus Megabytes en Kilobyets son:   %.0f\n",kilo);
	printf("Tus Megabytes en Bytes son:       %.0f\n",bytes);
	printf("Tus Megabytes en Bit son:         %.0f\n",bit);
	printf("Tus Megabytes en Gigabytes son:   %f\n",gb);
	printf("Tus Megabytes en Terabytes son:   %f\n",tb);
	printf("\n");
	
	system("pause");
	return 0;
}
