#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
	int matricula;
	char nome[100];
 	char sobrenome[100];
	float nota;
	
}taluno;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qtd,i;
	float media,imenor=10,imaior=0;
	int pior,melhor;
	
	printf("Defina a quantidade de alunos : ");
	scanf("%d",&qtd);
	taluno *aluno =(taluno*) malloc(qtd* sizeof(taluno*));
	
	for(i=0;i<qtd;i++){
		system("cls");
		printf("-------- %dº aluno--------\n",i+1);
		printf("Numero de Matricula do Aluno : ");
		scanf("%d",&aluno[i].matricula);
		fflush(stdin);
		printf("\nDigite o Nome do aluno : ");
		fgets(aluno[i].nome,100,stdin);
		printf("\nDigite o Sobrenome do aluno : ");
		fgets(aluno[i].sobrenome,100,stdin);
		printf("\nNota : ");
		scanf("%f",&aluno[i].nota);
		printf("---------------------------\n");
		media += aluno[i].nota;
		
		if(aluno[i].nota <imenor){
			imenor= aluno[i].nota;
			pior= i;
		}
		else if(aluno[i].nota> imaior){
			imaior= aluno[i].nota;
			melhor= i;
		}
	}
	printf("A media foi : %f\n",media/qtd);
	printf("O prior aluno foi : %s\n",aluno[pior].nome);
	printf("O melhor aluno foi : %s\n",aluno[melhor].nome);
	    	
return 0;
}
