#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,n,maior,menor;
	int *vetor;
	float media=0;
	int *m,*mn;
	m = &maior;
	mn = &menor;
	
	
	
	  printf("digite a quantidade de elementos : ");
	  scanf("%d",&n);
	  
	  vetor = (int *) malloc(n * sizeof(int));
	  
	    printf("digite o valor do elemento [1º] : ");
	    scanf("%d",&vetor[0]);
	    
	  media += vetor[0];
	  maior = vetor[0];
	  menor = vetor[0]; 
	  
	  for(i=1;i<n;i++){
	  	
	  	printf("\ndigite o valor do elemento [%dº] : ",i+1);
	  	scanf("%d",&vetor[i]);
	  		media += *(vetor +i);
	  	
	  	if(*m <vetor[i]){
	  		*m = *(vetor +i);
		  }
		  
		  else if(*mn>vetor[i]){
		  	*mn = *(vetor +i);
		  } 
	  }
	  printf("A media é = %.1f\n",media/n);
	  printf("O maior valor é = %d\n",*m);
	  printf("O menor valor é = %d",*mn);
	  


 	return 0;
 }
