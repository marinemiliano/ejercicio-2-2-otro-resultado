/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	char respuesta;
	float promedioPositivos;
	int   contadorPositivos;
	int   acumuladorPositivos;
	contadorPositivos=0;
	acumuladorPositivos=0;

	float promedioNegativos;
	int   contadorNegativos;
	int   acumuladorNegativos;
	contadorNegativos=0;
	acumuladorNegativos=0;

	int flagMinimoPositivo;
	int flagMaximoNegativo;
	int minimoPos;
	int maximoNeg;

	flagMinimoPositivo=0;
	flagMaximoNegativo=0;

	do
	{
		printf("ingrese numero");
		scanf("%d",&numero);

		if(numero<0)
		{
			contadorNegativos++;
			acumuladorNegativos+=numero;

			if(numero>maximoNeg || flagMaximoNegativo ==0)
			{
				maximoNeg=numero;
				flagMaximoNegativo=1;
			}
		}
		else
		{
			contadorPositivos++;
			acumuladorPositivos+=numero;

			if(numero<minimoPos || flagMinimoPositivo ==0)
			{
					minimoPos=numero;
					flagMinimoPositivo=1;
			}
		}
		printf("desea agregar un numero mas?, toque s");
		fflush(stdin);
		scanf("%c",&respuesta);

	}while(respuesta == 's');

	printf("el minimo de los positivos es %d\n",minimoPos);
	printf("el maximo negativo es %d\n",maximoNeg);

	if(contadorPositivos != 0)
	{
		promedioPositivos= (float)acumuladorPositivos/contadorPositivos;
		printf("el promedio de los positivos es %.2f\n",promedioPositivos);
	}
	else
	{
		printf("no se pudo calcular el promedio de los positivos\n");
	}

	if(contadorNegativos != 0)
	{
		promedioNegativos= (float)acumuladorNegativos/contadorNegativos;
		printf("el promedio de los negativos es %.2f\n",promedioNegativos);
	}
	else
	{
		printf("el promedio de los negativos no se pudo calcular\n");
	}

	return 0;
}
