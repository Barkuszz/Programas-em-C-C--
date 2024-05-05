#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int alunos;
	float *notas, *p;
	
	
	printf("Digite a quantidade de alunos : ");
	scanf("%d", &alunos);
	
	notas = (float *)(malloc(alunos * sizeof(float)));
	p = &notas[1];
	
	for(int i = 0; i<alunos; i++){
		printf("Digite a nota do aluno [%i]: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	for(int i = 1; i<alunos; i+=3, p+=3){
		*p += 0.5;	
	}
	p = &notas[0];
	
	for(int i=0; i<alunos; i++, p++){
		printf("\n\nA nota do aluno [%i] é : %.1f", i+1, *p);
	}
	
	free(notas);
	
	return 0;
}
