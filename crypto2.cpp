/*
	Name: crypto2.cpp
	Author: Logan Maia
	Date: 08/09/25 07:54
	Description: programa para cifrar uma mensagem realizando o "merge"
	entre dois vetores de caracteres
*/
#include <stdio.h>

//sess�o de prototipa��o
void merge(char [], char []);

//vari�veis globais
int i, j;
char crypto[40]; //jun��o dos dois vetores

main()
{
	i = j = 0;
	char nome[20]; //nome completo
	char docs[20]; //cpf e rg
	
	printf("Digite seu nome completo: ");
	gets(nome);
	
	printf("Informe seu CPF e RG: ");
	gets(docs);
	
	merge(nome, docs); //invoke da fun��o
	
	puts("\nTexto cifrado: ");
	for(j = 0; crypto[j] != '\0'; j++)
		printf("%c", crypto[j]);
	
}

//fun��o para realizar a mistura "merge" entre os dois vetores
void merge(char nome[], char docs[]) //criando novas vari�veis 
{
	for(i = 0; nome[i] != '\0'; i++)
	{
		crypto[j] = nome[i];
		crypto[j + 1] = docs[i];
		j = j + 2;
	}
}//fim do programa

