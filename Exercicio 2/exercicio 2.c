#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float altura,peso,IMC;
	
	printf("\n Digite sua altura: ");
	scanf("%f", &altura);
	
	system("CLS");
	
	printf("\n Digite seu peso: ");
	scanf("%f", &peso);
	
	IMC = (peso/pow(altura,2));
	
	printf("\n Seu IMC e de %f ", IMC);	
	
	if(IMC < 18) {
		printf("\n Sua classificacao conforme a tabela e: Magreza \n");	
	}
	if(IMC >= 18 && IMC <= 24.59) {
		printf("\n Sua classificacao conforme a tabela e: Saudavel \n");
	}
	if(IMC >= 25 && IMC <= 29.9) {
		printf("\n Sua classificacao conforme a tabela e: Sobrepeso \n");
	}
	else {
		if(IMC >= 30) {
			printf("\n Sua classificacao conforme a tabela e: Obesidade \n");
		}
	} 
	
	
	
	return 0;
}
