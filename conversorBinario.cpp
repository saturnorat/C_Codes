/*
	Name: conversorBinario.cpp
	Author: Logan Maia
	Date: 27/05/25 11:34
	Description: programa para ler um numero inteiro positivo e converte-lo para o seu equivalente bin�rio
*/
#include <stdio.h>

main()
{
	int vet[30];
	int i = 0; //indice do vetor
	int num, resto, quoc;
	num = quoc = resto = 0;
	
	printf("Digite um n�mero para converte-lo em binario: ");
	scanf("%d", &num);
	
	do
	{
		printf("%d, ", num);
		
		quoc = num/2;
		resto = num - (quoc * 2);
		vet[i] = resto;
		num = quoc;
		i++;
		
	}while(num >= 2);
	vet[i] = num;
	
	//impressao do vetor na ordem original
	puts("\nVetor original: ");
	for(i = 0; vet[i] == 0 || vet[i] == 1; i++)
		printf("%d|", vet[i]);
		
	//impressao do vetor com o codigo binario
	puts("\nVetor com o codigo binario: ");
	for(i = i - 1; i >= 0; i--)
		printf("%d|", vet[i]);
	
}//fim do programa
