#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int alunos;
 	float media_alunos[100], notap1[100],notap2[100],mediap1=0,mediap2=0;
 	int i;
 	
 	printf("digite a quantidade de alunos : ");
 	scanf("%d",&alunos);
 	
 	for(i=0;i<alunos;i++){	
 		printf("digite a nota da primeira prova do %iº aluno\n",i+1);
 		scanf("%f",&notap1[i]);
 		
 		printf("digite a nota da segunda prova do %iº aluno\n",i+1);
 		scanf("%f",&notap2[i]);
 		
 		media_alunos[i] = (notap1[i] + notap2[i])/2,00;
 		mediap1 = mediap1 + notap1[i];
 		mediap2 = mediap2 + notap2[i]; 
	 }
	 for(i=0;i<alunos;i++){
	 	printf("A  média do %dº aluno é %.1f : \n\n",i+1, media_alunos[i]);
	 	
	 	if(media_alunos[i]<7){
	 		printf("Aluno Reprovado!\n\n");
		 }
		 else{
		 	printf("Aluno Aprovado!\n\n");
		 }
	 }
	 printf("A media dos alunos na primeira prova foi : %.1f\n\n",mediap1/alunos);
	 printf("A media dos alunos na segunda prova foi : %.1f",mediap2/alunos);
 	
 	
return 0;
 }
