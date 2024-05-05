#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[15];
	int idade;
	int telefone;
	char sexo[15];
	char email[15];	
}taluno;

int main(void){
		
	
	taluno *aluno= (taluno*) malloc(sizeof(taluno*));
	
	
	printf("digite o nome e o sobrenome do aluno :");
	scanf("%s",aluno->nome);
	
	printf("\ndigite a idade do aluno :");
	scanf("%d",&aluno->idade);
	fflush(stdin);
	printf("\ndigite o telefone do aluno :");
	scanf("%d",&aluno->telefone);

	printf("\ndigite o sexo do aluno :");
	scanf("%s",&aluno->sexo);
	
	printf("\ndigite o e-mail do aluno :");
	scanf("%s",&aluno->email);
	
	
     printf("nome : %s\n",aluno->nome);
	 printf("idade : %d\n",aluno->idade);
	 printf("telefone : %d\n",aluno->telefone);
	 printf("sexo : %s\n",aluno->sexo);
	 printf("e-mail : %s",aluno->email);
	 
free(aluno);	 
system("pause");
return 0;
}
