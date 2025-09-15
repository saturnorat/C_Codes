/*
	Name: VetorFunc.cpp
	Author: Logan Maia
	Date: 15/09/25 07:53
	Description: Programa para fazer a carga e opera��es 
	e opera��es em vetores por meio de fun��es
*/
//sess�o de importa��o de bibliotecas
#include <stdio.h>

//sess�o de prototipa��o
int lerNum();
void imprimirVetor(int *, int);
void imprimirVetorContrario(int *, int);
main()
{
	int vet[3];
	int tam = sizeof(vet)/sizeof(int); //sizeof pega o tamanho da variavel em bytes, ent�o dividimos pelo sizeof(int) que � o tamanho de uma vari�vel int (calcula a qtde de elementos no vetor)

	//fazer a carga no vetor
	for(int i = 0; i < tam; i++)
		vet[i] = lerNum();
	
	//invoke da fun��o para imprimir o vetor 
	printf("Vetor ordem normal: \n");
	imprimirVetor(vet, tam);
	printf("\nVetor ao contrario: \n");
	imprimirVetorContrario(vet, tam);
	
}//fim do programa

int lerNum()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	return num;
}

void imprimirVetor(int *V, int tam)
{
	for(int i = 0; i < tam; i++)
		printf("[%d]", V[i]);
	
}

void imprimirVetorContrario(int *V, int tam)
{
		for(int i = tam-1; i >= 0; i--)
			printf("[%d]", V[i]);
	
}
