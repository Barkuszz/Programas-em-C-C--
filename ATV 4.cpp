#include <stdio.h>
#include <stdlib.h>
 int main(){
 char key,choice;
 int num,count;
 float yield;
 double price;

char *ponteiroc;
ponteiroc = &key;
char *ponteiroch;
ponteiroch = &choice;
int *ponteiroi;
ponteiroi = &num;
int *ponteiroco;
ponteiroco = &count;
float *ponteirof;
ponteirof = &yield;
double *ponteirod;
ponteirod = &price;

printf("key    %d bytes\n%i \n\nchoice %d bytes\n%i",sizeof(key),ponteiroc,sizeof(choice),ponteiroch);
printf("\n\nnum    %d bytes\n%i \n\ncount  %d bytes\n%i",sizeof(num),ponteiroi,sizeof(count),ponteiroco);
printf("\n\nyield  %d bytes\n%i \n\nprice  %d bytes\n%i",sizeof(yield),ponteirof,sizeof(price),ponteirod);

 
 
	return 0;
 }
