#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 int main(void) {
 	int i,j,c;
 	int x,y;
 	int zeros=0;
 	
 	 printf("digite o x:");
 	 scanf("%d",&x);
 	 printf("digite o y:");
 	 scanf("%d",&y);
 	 
 	 int matriz[x][y];
 	 
 	for(i=0;i<x;i++){
 		for(j=0;j<y;j++){			
 			scanf("%d",&matriz[i][j]);							 			 					
		}
    }
    for(i=0;i<x;i++){
    	for(j=0;j<y;j++){
		
   			if(matriz[0][j]+matriz[0][j+1]==0){
     	 	  printf("N");       
		}	
    }
}
    for(i=0;i<x;i++){
    	for(j=0;j<y;j++){	
	        if(matriz[i][j]+matriz[i][j]==0){
	        	printf("S");
			}
		}	
    }
	    
	      
		    	
 return 0;
 }
 	
 	
