#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, teste;
	printf("Informe o numero:");
	scanf("%d",&n);
teste=n % 2; //se fosse divisao era /2...
 
 printf("teste: %d",teste);
 
 if (teste==0){
	printf("\nPAR");
}else{
	printf("\nIMPAR");
}	
	return 0; 
}
