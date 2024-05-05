#include <stdio.h>
 
 int main(){
 	
 	float x;
 	float *ponteiro;
 	ponteiro = &x;
 	scanf("%f",&x);
    
    
 	printf("direto : %f\n",x);
 	printf("indireto : %f\n",*ponteiro);
    printf("endereco da variavel :%i\n",ponteiro);
 	 	
 	return 0;
 }
