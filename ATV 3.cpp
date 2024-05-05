#include <stdio.h>
#include <stdlib.h>
 int main(){
 	//mostra a variável com o ponteiro
 	int t,tam;
 	int i=1;
 	int j=2;
 	int u=3;
 	int n[]= {i,j,u};
 	tam = sizeof(n);
 	int *ponteiro= n;
 	printf("[");
    for(t=0;t<sizeof(n)/sizeof(n[0]);t++){
        
 		printf("[%d]",ponteiro[t]);
 	   
    }
	printf("]");
 	return 0;
 }
