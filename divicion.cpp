#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1,num2,div;

	printf("ingrese el primer numero ");
	scanf("%f" ,&num1);
	printf("ingrese el segundo numero ");
	scanf("%f" ,&num2);

	div = num1/num2;

	printf("el resultado es: %.1f\n",div);

	system("pause");
	return 0;
}
