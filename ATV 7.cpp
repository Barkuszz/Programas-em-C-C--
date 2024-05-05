#include <stdio.h>
#include <stdlib.h>
 int main(){

	float kms[] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};  
	float lts[] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    float kpl[10];
    float *pk,*pl;
    int i;
    
    pk = &kms[0];
    pl = &lts[0];
    for(i = 0 ; i < 10 ;i++){
    	kpl[i]=kms[i] / lts[i];
    	printf("%f\n",kpl[i]);
	}
	

return 0;
 }
