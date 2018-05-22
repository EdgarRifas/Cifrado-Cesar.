//*Edgar Francisco Medina Rifas
//IS715468

//Librerías, funciones, enumeraciones
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define enter printf("\n");
//Main
int main()
{
	setvbuf(stderr, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	char cad[100];
	int n;
	printf("Ingresa lo que quieras cifrar:"); enter
	gets(cad);
	fflush(stdin);
	printf("Ingresa cuanto quieres distanciar las letras: ");enter
	scanf("%d",&n);
	printf("Trabajando..."); enter
	printf("..."); enter
	printf("Mensaje: ");
	printf("%s",cad); enter
	for (int i=0;i<strlen(cad);i++)
	{
		for (int j=0;j<n;j++)
		{
			if (cad[i]>64 && cad[i]<91)
			{
				if (cad[i]==90)
				{
					cad[i]=65;
				}
				cad[i]++;
			}
			else if (cad[i]>96 && cad[i]<123)
			{
				if (cad[i]==122)
				{
					cad[i]=97;
				}
				cad[i]++;
			}
			else
			{
				cad[i]+=0;
			}
		}
	}
	printf("Mensaje cifrado: ");
	printf("%s",cad);
	return 0;
}
//Desarrollo de Funciones

