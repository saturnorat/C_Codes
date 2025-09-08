/*
	Name: troca.cpp
	Author: Logan Maia
	Date: 08/09/25 08:35
	Description: programa que l� o valor para duas variavies tipo inteiro 
	A e B e troque o valor entre elas, ou seja, o que tinha em A vai para B e vice versa
 
*/
#include <stdio.h>

//sess�o de prototipa��o
void trocar(int *, int *);

main()
{
	int a, b, aux;
	a = b = aux = 0;
	
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	
	trocar(&a, &b);
	
	printf("\nA: %i", a);
	printf("\nB: %i", b);

	
}//fim do programa

//fun��o para trocar os valores entre duas vari�veis
//com passagem de par�metro por refer�ncia
void trocar(int *a, int *b)
{
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
}
