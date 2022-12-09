#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//TRANSFORMAR celcius to fahrenheit
	
	float celsius, fahrenheit;
	printf("Informe a temperatura em graus celsius:");
	scanf("%f",&celsius);
	fahrenheit = (9 * celsius + 160)/5;
	printf("o resultado em graus fahrenheit e: %.2f", fahrenheit);
		
	
	
	
	
	
	
	return 0;
}
