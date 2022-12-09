#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

float n1, n2, soma, sub, mul, div, res;

printf("informe o valor 1:");
scanf("%f",&n1);

printf("informe o valor 2:");
scanf("%f",&n2);

//soma 
soma = n1 + n2;
printf("o valor da soma e: %f",soma);
//subtração
sub = n1 - n2;
printf("\no valor da sub e: %f",sub);
//multiplicação
mul = n1 * n2;
printf("\no valor da mult e: %f",mul);
//divisao
div = n1 / n2;
printf("\no valor da div e: %f",div);

	return 0;
}
