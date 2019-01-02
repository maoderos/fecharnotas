#include <stdio.h>
#include <math.h>

int main () {

 	float p1, p2, p3; // variables for the grades
	printf("insira a suas notas abaixo\n");
	printf("Prova 1");
	scanf("%f", &p1);
	printf("\nProva 2:");
	scanf("%f", &p2);
	printf("\nProva 3:");
	scanf("%f", &p3);

	float sum = p1 + p2 + p3;
	float average = sum/3;

	if (average >= 7) {
		printf("parabéns!!, você foi aprovado!");
	} else if (average < 7 && average >= 5) {
		printf("Está de exame");
	} else if (average < 5) {
		printf("REPROVADO");
	} 
	return 0;
}