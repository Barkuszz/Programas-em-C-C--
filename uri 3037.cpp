#include <stdio.h>

int main() {
int n,i,j=0;
int pj,pm,x,d;

 scanf("%d",&n);
 
  for(i=0;i<n;i++){
  	pm=0;
    pj=0; 
  		for(j=0;j<3;j++){
  	 		scanf("%i %i",&x,&d);
  	 		pj += x*d;	 	
   	    }
  	 	
	  	for(j=0;j<3;j++){
	  		scanf("%i %i",&x,&d);
  			pm += x*d;
		}
		
  		if(pj > pm){
  	 	  printf("JOAO\n");
		}
		
		else{
	 	   printf("MARIA\n");
		}
  	
  	
    }





return 0;
}
