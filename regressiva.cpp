/*
	Name: regressiva.cpp
	Author: Logan Maia
	Date: 01/04/25 11:55
	Description: regressa o n�mero que o usu�rio digitar at� sua vers�o negativa
*/
#include <stdio.h>

main()
{
	int num = 0;
	int i = 0;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	i = -num;

	while (num >= i){
		printf("\n %i", num);
		num--;

	}
	
}//fim do programa
