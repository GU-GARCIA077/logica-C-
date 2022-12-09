#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

float n1, n2, n3, n4, media;
 
 printf("Informe nota 1:");
 scanf("%f",& n1);
 
 printf("Informe nota 2:");
 scanf("%f",& n2);
 
 printf("Informe nota 3:");
 scanf("%f",& n3);
 
 printf("Informe nota 4:");
 scanf("%f",&n4);
 
 media = (n1+n2+n3+n4 )/4;
 
 printf("A media e: %f",media);
 
 
 if(media<=4){
 	printf("\nAluno REPROVADO");	
 }else if(media<=7){
 	printf("\nAluno em RECUPERACAO");
}else{
	printf("\nAluno APROVADO");
}
 
	return 0;
}
