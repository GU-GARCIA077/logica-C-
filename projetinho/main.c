#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

float glic, correcao, uicafe, uialmoco, uijanta;
printf("informe a glicemia:");
scanf("%f",&glic);
correcao = (glic - 100)/50;
printf("voce deve aplicar de correcao de insulina: %.1f", correcao);

uicafe = (correcao + 4);
printf("\nvoce deve aplicar de insulina no cafe: %.1f", uicafe);

uialmoco = (correcao + 8);
printf("\nvoce deve aplicar de insulina no almoco: %.1f", uialmoco);

uijanta = (correcao + 8);
printf("\nvoce deve aplicar de insulina na janta: %.1f", uijanta);




return 0;
}
