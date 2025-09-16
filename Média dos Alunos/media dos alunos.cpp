#include <stdio.h>
#include <stdlib.h>

int main() 
{
int media, contagem = 1, alunos, limite, aprovados, reprovados = 0, recuperacao;

	printf("Informe a quantidade de alunos: ");
	scanf("%d", &alunos);	
	do
	{
		printf("Informe a media final do %d aluno: ", contagem);
		scanf("%d", &media);
	
		if (media >=0 && media <=4)
		{
			printf("Aluno reprovado.\n");
			reprovados++;
		}
			else
			if (media >=5 && media <=6)
			{
				printf("Aluno de recuperacao.\n");
				recuperacao++;
			}
				else
				if (media >=7 && media <=10)
				{
					printf("Aluno aprovado.\n");
					aprovados++;	
				}				
					else
					{	
						printf("Informacao incorreta, por favor tente novamente.\n");
						limite--;
						contagem--;	
					}
		printf("---------------------------------------------------------------------------------------------------------------\n");
		limite++;
		contagem++;
	}
		while (limite <= alunos);
		while (media < 0 || media > 10);
		printf("Alunos aprodados %d:\n", aprovados);
		printf("Alunos de recuperacao %d:\n", recuperacao);
		printf("Alunos reprovados %d:\n", reprovados);	
	return 0;
}
