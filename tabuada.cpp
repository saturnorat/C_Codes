/*
	Name: tabuada.cpp
	Author: Logan Maia
	Date: 01/04/25 11:20
	Description: programa para exibir a tabuada de multiplica��o do n�mero escolhido pelo usu�rio
*/
#include <stdio.h>

main()
{
	int num = 0;
	
	printf("Digite um numero inteiro para exibir a tabuada: ");
	scanf("%i", &num);
	
	//fa�a a logica da impress�o com do...while
	int cont = 1;
	do
	{

		printf("%i x %i = %i\n", num, cont, num * cont);
		cont++;
	}while (cont <= 10);
}//fim do programa

