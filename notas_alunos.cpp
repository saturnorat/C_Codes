/*
	Name: notas_alunos.cpp
	Author: Logan Maia
	Date: 08/04/25 11:18
	Description: programa para calcular m�dia de alunos e percentual de aprova��o
*/
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4;
	float media, notaExame, percAprov, percRep;
	int i, aprovados, reprovados, qtdExame; //contador
	
	nota1 = nota2 = nota3 = nota4 = 0.0;
	media = notaExame = percAprov = percRep = 0.0;
	i = aprovados = reprovados = qtdExame = 0;
	
	while(i < 7)
	{
		printf("%d� aluno: \n", i+1);
		printf("============================\n");
		printf("Digite a primeira nota: "); scanf("%f", &nota1);
		printf("Digite a segunda nota: "); scanf("%f", &nota2);
		printf("Digite a terceira nota: "); scanf("%f", &nota3);
		printf("Digite a quarta nota: "); scanf("%f", &nota4);
		
		media = (nota1 + nota2 + nota3 + nota4)/4;
		
		if(media >= 6.0)
		{
			puts("APROVADO!!!\n");
			aprovados++;
		}
		else if(media >= 4.0)
			{
				puts("Voc� est� de EXAME :/");
				qtdExame++;
				notaExame = 12.0 - media;
				printf("Nota necess�ria no exame: %.2f \n\n", notaExame);
			}
		else
		{
			puts("Voc� foi REPROVADO :(\n");
			reprovados++;
		}
	i++;
	}//fim do while
	
	percAprov = (aprovados / 7.0) * 100;
	percRep = (reprovados / 7.0)* 100;
	
	printf("Quantidade de aprovados: %d - %.2f%%",aprovados, percAprov);
	printf("\nQuantidade de reprovados: %d - %.2f%%",reprovados, percRep);
	printf("\nQuantidade de alunos que far�o o exame: %d",qtdExame);
	
}//fim do programa
