#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, novosalario;
	printf("Informe o seu salario atual:");
	scanf("%f",&salario);
	 if(salario <= 1031){//aumento de 15% 
	 novosalario = salario * 1.15;
	 }else if(salario >1031 && salario < 2500){//aumento de 10%
	 	novosalario = salario * 1.10;
	 }else{//aumento de 5%
	 novosalario = salario * 1.05;
	 }
	  printf("\nNovo salario: %.2f",novosalario);
	return 0;
}
