#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,alunos;
	float *nota_p1;
	float *nota_p2;
	float media_alunos[100],mediap1=0,mediap2=0;
	
	printf("Determine a quantidade de alunos : ");
	scanf("%d",&alunos);
		
	nota_p1 = (float*) malloc(alunos * sizeof(float));
	nota_p2 = (float*) malloc(alunos * sizeof(float));
	
	for(i=0;i<alunos;i++){
			
		printf("digite a nota da primeira prova do %iº aluno\n",i+1);
 		scanf("%f",&nota_p1[i]);
 		
 		printf("digite a nota da segunda prova do %iº aluno\n",i+1);
 		scanf("%f",&nota_p2[i]);
 		
 		media_alunos[i] = (nota_p1[i] + nota_p2[i])/2,00;
 		mediap1 = mediap1 + nota_p1[i];
 		mediap2 = mediap2 + nota_p2[i];
 		
 		printf("A  média do [%dº] aluno é %.1f : \n\n",i+1, media_alunos[i]);
 		
 		if(media_alunos[i]<7){
	 		printf("Aluno Reprovado!\n\n");
		 }
		 else{
		 	printf("Aluno Aprovado!\n\n");
		 }
	}
	printf("A media dos alunos na primeira prova foi : %.2f\n\n",mediap1/alunos);
	printf("A media dos alunos na segunda prova foi : %.2f",mediap2/alunos);
 		
 	return 0;
 }
