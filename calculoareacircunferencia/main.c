#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//area= pi*r2
	float area, PI = 3.14, raio;
	
	printf("informe o raio:");
	scanf("%f",&raio);
	
	area = PI * raio * raio;
	printf("A area e: %f", area);
	
	
	
	
	return 0;
}
