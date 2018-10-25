#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float periodo;
	
	printf("\n Digite o horario de inicio do turno: ");
	scanf("%f", &periodo);
	
	system("CLS");
	
	if(periodo >= 5 && periodo <= 12.59 ) {
		printf("\n O seu periodo e da manha! \n");
	}
	if(periodo >= 13 && periodo <= 20.59 ) {
		printf("\n O seu periodo e da tarde! \n");
	}
	else {
		if(periodo >= 21 || periodo <= 4.59 ) {
			printf("\n O seu periodo e da noite! \n");
		}
		
	}
	
	return 0;
}
